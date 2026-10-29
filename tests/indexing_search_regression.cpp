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
    return 0;
}
