#include <cassert>
#include <cmath>
#include <string>
#include <vector>
#include "AutocompleteIndex.h"
#include "BM25Ranker.h"
#include "InvertedIndex.h"
#include "QueryProcessor.h"
#include "Ranker.h"
#include "SearchEngine.h"
#include "Tokenizer.h"

int main() {
    InvertedIndex index;
    index.addDocument(1, {"search", "engine"});
    assert(index.contains("search"));
    assert(index.search("search") == std::vector<int>{1});
    {
        InvertedIndex index;
        assert(index.search("missing").empty());
        assert(!index.contains("missing"));
    }
    {
        InvertedIndex index;
        index.addDocument(30, {"term"});
        index.addDocument(10, {"term"});
        index.addDocument(20, {"term"});
        assert((index.search("term") == std::vector<int>{10, 20, 30}));
    }
    {
        InvertedIndex index;
        index.addDocument(4, {"alpha", "alpha", "alpha"});
        assert(index.termFrequency("alpha", 4) == 3);
        assert(index.documentFrequency("alpha") == 1);
    }
    {
        InvertedIndex index;
        index.addDocument(1, {"alpha", "", "beta", ""});
        assert(index.documentLength(1) == 2);
        assert(index.totalTokenCount() == 2);
    }
    {
        InvertedIndex index;
        index.addDocument(1, {});
        assert(index.documentCount() == 1);
        assert(index.documentLength(1) == 0);
        assert(index.averageDocumentLength() == 0.0);
    }
    {
        InvertedIndex index;
        index.addDocument(1, {"alpha", "beta"});
        index.addDocument(2, {"alpha"});
        assert(index.documentFrequency("alpha") == 2);
        assert(index.documentFrequency("beta") == 1);
    }
    {
        InvertedIndex index;
        index.addDocument(1, {"alpha", "alpha"});
        assert(index.termFrequency("alpha", 2) == 0);
        assert(index.termFrequency("missing", 1) == 0);
    }
    {
        InvertedIndex index;
        index.addDocument(1, {"alpha", "beta"});
        index.addDocument(2, {"alpha", "gamma"});
        QueryProcessor processor;
        assert((processor.search(index, "alpha beta") == std::vector<int>{1}));
    }
    {
        InvertedIndex index;
        index.addDocument(1, {"alpha"});
        QueryProcessor processor;
        assert((processor.search(index, "ALPHA!!!") == std::vector<int>{1}));
    }
    {
        InvertedIndex index;
        index.addDocument(1, {"alpha"});
        QueryProcessor processor;
        assert(processor.search(index, "unknown").empty());
    }
    {
        InvertedIndex index;
        index.addDocument(1, {"alpha", "beta"});
        QueryProcessor processor;
        assert((processor.search(index, "alpha alpha beta") == std::vector<int>{1}));
    }
    {
        InvertedIndex index;
        index.addDocument(1, {"alpha", "beta"});
        index.addDocument(2, {"alpha", "alpha", "beta"});
        Ranker ranker;
        const auto results = ranker.tfidf(index, {"alpha"});
        assert(results.size() == 2);
        assert(results.front().documentId == 2);
    }
    {
        InvertedIndex index;
        index.addDocument(1, {"alpha"});
        Ranker ranker;
        assert(ranker.tfidf(index, {"unknown"}).empty());
    }
    {
        InvertedIndex index;
        index.addDocument(1, {"alpha"});
        BM25Ranker ranker;
        assert(ranker.rank(index, {}).empty());
    }
    {
        InvertedIndex index;
        index.addDocument(1, {"alpha"});
        BM25Ranker ranker;
        assert(ranker.rank(index, {"unknown"}).empty());
    }
    {
        InvertedIndex index;
        index.addDocument(1, {"alpha"});
        index.addDocument(2, {"beta"});
        BM25Ranker ranker;
        const auto results = ranker.rank(index, {"alpha"});
        assert(results.size() == 1);
        assert(results.front().documentId == 1);
    }
    {
        SearchEngine engine;
        engine.addDocument(7, {"search", "engine"});
        assert((engine.search("SEARCH") == std::vector<int>{7}));
    }
    {
        SearchEngine engine;
        engine.addDocument(7, {"search", "engine"});
        assert(engine.search("notfound").empty());
        assert(engine.bm25Search("notfound").empty());
    }
    {
        AutocompleteIndex autocomplete;
        autocomplete.insert("search");
        autocomplete.insert("sea");
        autocomplete.insert("season");
        assert((autocomplete.suggest("sea", 10) == std::vector<std::string>{"sea", "search", "season"}));
    }
    {
        AutocompleteIndex autocomplete;
        autocomplete.insert("alpha");
        autocomplete.insert("alpha");
        assert(autocomplete.size() == 1);
    }
    {
        Tokenizer tokenizer;
        assert((tokenizer.tokenize("Alpha,beta.gamma") == std::vector<std::string>{"alpha", "beta", "gamma"}));
    }
    {
        InvertedIndex index;
        index.addDocument(1, {"alpha", "beta"});
        index.addDocument(2, {"gamma", "delta", "epsilon"});
        assert(index.totalTokenCount() == 5);
        assert(std::abs(index.averageDocumentLength() - 2.5) < 1e-9);
    }
    {
        InvertedIndex index;
        index.addDocument(8, {"alpha"});
        index.addDocument(8, {"beta"});
        assert((index.search("alpha") == std::vector<int>{8}));
        assert((index.search("beta") == std::vector<int>{8}));
    }
    {
        AutocompleteIndex autocomplete;
        autocomplete.insert("alpha");
        autocomplete.insert("alpine");
        autocomplete.insert("also");
        const auto results = autocomplete.suggest("al", 2);
        assert(results.size() == 2);
        assert((results == std::vector<std::string>{"alpha", "alpine"}));
    }
    {
        InvertedIndex index;
        index.addDocument(1, {"alpha", "beta"});
        index.addDocument(2, {"alpha", "gamma"});
        Ranker ranker;
        const auto first = ranker.tfidf(index, {"alpha", "beta"});
        const auto second = ranker.tfidf(index, {"beta", "alpha"});
        assert(first.size() == second.size());
        for (std::size_t i = 0; i < first.size(); ++i) {
            assert(first[i].documentId == second[i].documentId);
            assert(std::abs(first[i].score - second[i].score) < 1e-9);
        }
    }
    { InvertedIndex x; assert(x.termCount() == 0); }
    { InvertedIndex x; assert(x.documentCount() == 0); }
    { InvertedIndex x; assert(x.totalTokenCount() == 0); }
    { InvertedIndex x; assert(x.averageDocumentLength() == 0.0); }
    { InvertedIndex x; x.addDocument(1, {"one"}); assert(x.termCount() == 1); }
    { InvertedIndex x; x.addDocument(1, {"one", "two"}); assert(x.termCount() == 2); }
    { InvertedIndex x; x.addDocument(1, {"one", "one"}); assert(x.termCount() == 1); }
    { InvertedIndex x; x.addDocument(1, {"one"}); assert(x.documentCount() == 1); }
    { InvertedIndex x; x.addDocument(1, {"one"}); x.addDocument(2, {"two"}); assert(x.documentCount() == 2); }
    { InvertedIndex x; x.addDocument(1, {"one", "two"}); assert(x.documentLength(1) == 2); }
    return 0;
}
