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
    { InvertedIndex x; x.addDocument(1, {"one", "two"}); assert(x.totalTokenCount() == 2); }
    { InvertedIndex x; x.addDocument(1, {"one", "two"}); x.addDocument(2, {"three"}); assert(x.totalTokenCount() == 3); }
    { InvertedIndex x; x.addDocument(1, {"one"}); x.addDocument(2, {"two"}); assert(x.averageDocumentLength() == 1.0); }
    { InvertedIndex x; x.addDocument(1, {"one", "two"}); x.addDocument(2, {"three", "four"}); assert(x.averageDocumentLength() == 2.0); }
    { InvertedIndex x; x.addDocument(1, {"one"}); assert(x.contains("one")); }
    { InvertedIndex x; x.addDocument(1, {"one"}); assert(!x.contains("two")); }
    { InvertedIndex x; x.addDocument(1, {"one"}); assert(x.search("one").front() == 1); }
    { InvertedIndex x; x.addDocument(1, {"one"}); assert(x.documentFrequency("one") == 1); }
    { InvertedIndex x; x.addDocument(1, {"one"}); x.addDocument(2, {"one"}); assert(x.documentFrequency("one") == 2); }
    { InvertedIndex x; x.addDocument(1, {"red", "blue"}); assert(x.termCount() == 2); }
    { InvertedIndex x; x.addDocument(1, {"red"}); x.addDocument(2, {"blue"}); assert(x.documentFrequency("red") == 1); }
    { InvertedIndex x; x.addDocument(1, {"red", "red"}); assert(x.termFrequency("red", 1) == 2); }
    { InvertedIndex x; x.addDocument(1, {"red", "blue"}); assert(x.documentLength(1) == 2); }
    { InvertedIndex x; x.addDocument(1, {"red"}); x.addDocument(2, {"blue", "green"}); assert(x.totalTokenCount() == 3); }
    { InvertedIndex x; x.addDocument(1, {"red"}); x.addDocument(2, {"blue", "green"}); assert(x.averageDocumentLength() == 1.5); }
    { InvertedIndex x; x.addDocument(10, {"red"}); x.addDocument(1, {"red"}); assert((x.search("red") == std::vector<int>{1, 10})); }
    { InvertedIndex x; x.addDocument(1, {"red"}); assert(x.search("RED").empty()); }
    { InvertedIndex x; x.addDocument(1, {"red"}); assert(x.termFrequency("blue", 1) == 0); }
    { InvertedIndex x; x.addDocument(1, {"red"}); assert(x.documentFrequency("blue") == 0); }
    { InvertedIndex x; x.addDocument(1, {"red"}); x.addDocument(1, {"blue"}); assert(x.documentCount() == 1); }
    { InvertedIndex x; x.addDocument(1, {"red"}); x.addDocument(1, {"blue"}); assert(x.totalTokenCount() == 2); }
    { InvertedIndex x; x.addDocument(1, {}); x.addDocument(2, {"red"}); assert(x.averageDocumentLength() == 0.5); }
    { InvertedIndex x; x.addDocument(1, {"red", "", "blue"}); assert(x.totalTokenCount() == 2); }
    { InvertedIndex x; x.addDocument(1, {"red", "red", "blue"}); assert(x.documentFrequency("red") == 1); }
    { InvertedIndex x; x.addDocument(1, {"red"}); x.addDocument(2, {"red"}); x.addDocument(3, {"red"}); assert(x.search("red").size() == 3); }
    { InvertedIndex x; x.addDocument(3, {"red"}); x.addDocument(2, {"red"}); x.addDocument(1, {"red"}); assert((x.search("red") == std::vector<int>{1, 2, 3})); }
    { InvertedIndex x; x.addDocument(1, {"red", "blue"}); x.addDocument(2, {"green"}); assert(x.termCount() == 3); }
    { InvertedIndex x; x.addDocument(1, {"red", "blue"}); x.addDocument(2, {"green"}); assert(x.documentCount() == 2); }
    { InvertedIndex x; x.addDocument(1, {"north", "south"}); assert(x.search("north") == x.search("north")); }
    { InvertedIndex x; x.addDocument(1, {"north", "south"}); assert(x.documentFrequency("north") + x.documentFrequency("south") == 2); }
    { InvertedIndex index; index.addDocument(1, {"ra0", "rb0"}); index.addDocument(2, {"ra0", "rb0", "rc0"}); index.addDocument(3, {"ra0", "rc0"}); QueryProcessor processor; assert((processor.search(index, "rc0 rb0 ra0") == std::vector<int>{2})); }
    { InvertedIndex index; index.addDocument(1, {"ra1", "rb1", "rc1"}); index.addDocument(2, {"ra1", "rb1"}); index.addDocument(3, {"ra1", "rb1", "rc1"}); QueryProcessor processor; assert((processor.search(index, "rb1 ra1 rc1") == std::vector<int>{1, 3})); }
    { InvertedIndex index; index.addDocument(1, {"ra2", "rb2"}); index.addDocument(2, {"rb2", "rc2"}); index.addDocument(3, {"ra2", "rc2"}); index.addDocument(4, {"ra2", "rb2", "rc2"}); QueryProcessor processor; assert((processor.search(index, "ra2 rc2 rb2") == std::vector<int>{4})); }
    { InvertedIndex index; index.addDocument(1, {"ra3", "rb3"}); index.addDocument(2, {"ra3", "rb3", "rc3"}); index.addDocument(3, {"ra3", "rc3"}); QueryProcessor processor; assert((processor.search(index, "rc3 ra3 rb3") == std::vector<int>{2})); }
    { InvertedIndex index; index.addDocument(1, {"ra4", "rb4", "rc4"}); index.addDocument(2, {"ra4", "rb4"}); index.addDocument(3, {"ra4", "rb4", "rc4"}); QueryProcessor processor; assert((processor.search(index, "rb4 rc4 ra4") == std::vector<int>{1, 3})); }
    { InvertedIndex index; index.addDocument(1, {"ra5", "rb5"}); index.addDocument(2, {"rb5", "rc5"}); index.addDocument(3, {"ra5", "rc5"}); index.addDocument(4, {"ra5", "rb5", "rc5"}); QueryProcessor processor; assert((processor.search(index, "ra5 rb5 rc5") == std::vector<int>{4})); }
    { InvertedIndex index; index.addDocument(1, {"ra6", "rb6"}); index.addDocument(2, {"ra6", "rb6", "rc6"}); index.addDocument(3, {"ra6", "rc6"}); QueryProcessor processor; assert((processor.search(index, "rc6 rb6 ra6") == std::vector<int>{2})); }
    { InvertedIndex index; index.addDocument(1, {"ra7", "rb7", "rc7"}); index.addDocument(2, {"ra7", "rb7"}); index.addDocument(3, {"ra7", "rb7", "rc7"}); QueryProcessor processor; assert((processor.search(index, "rb7 ra7 rc7") == std::vector<int>{1, 3})); }
    { InvertedIndex index; index.addDocument(1, {"ra8", "rb8"}); index.addDocument(2, {"rb8", "rc8"}); index.addDocument(3, {"ra8", "rc8"}); index.addDocument(4, {"ra8", "rb8", "rc8"}); QueryProcessor processor; assert((processor.search(index, "ra8 rc8 rb8") == std::vector<int>{4})); }
    { InvertedIndex index; index.addDocument(1, {"ra9", "rb9"}); index.addDocument(2, {"ra9", "rb9", "rc9"}); index.addDocument(3, {"ra9", "rc9"}); QueryProcessor processor; assert((processor.search(index, "rc9 ra9 rb9") == std::vector<int>{2})); }
    { InvertedIndex index; index.addDocument(1, {"ra10", "rb10", "rc10"}); index.addDocument(2, {"ra10", "rb10"}); index.addDocument(3, {"ra10", "rb10", "rc10"}); QueryProcessor processor; assert((processor.search(index, "rb10 rc10 ra10") == std::vector<int>{1, 3})); }
    { InvertedIndex index; index.addDocument(1, {"ra11", "rb11"}); index.addDocument(2, {"rb11", "rc11"}); index.addDocument(3, {"ra11", "rc11"}); index.addDocument(4, {"ra11", "rb11", "rc11"}); QueryProcessor processor; assert((processor.search(index, "ra11 rb11 rc11") == std::vector<int>{4})); }
    { InvertedIndex index; index.addDocument(1, {"ra12", "rb12"}); index.addDocument(2, {"ra12", "rb12", "rc12"}); index.addDocument(3, {"ra12", "rc12"}); QueryProcessor processor; assert((processor.search(index, "rc12 rb12 ra12") == std::vector<int>{2})); }
    { InvertedIndex index; index.addDocument(1, {"ra13", "rb13", "rc13"}); index.addDocument(2, {"ra13", "rb13"}); index.addDocument(3, {"ra13", "rb13", "rc13"}); QueryProcessor processor; assert((processor.search(index, "rb13 ra13 rc13") == std::vector<int>{1, 3})); }
    { InvertedIndex index; index.addDocument(1, {"ra14", "rb14"}); index.addDocument(2, {"rb14", "rc14"}); index.addDocument(3, {"ra14", "rc14"}); index.addDocument(4, {"ra14", "rb14", "rc14"}); QueryProcessor processor; assert((processor.search(index, "ra14 rc14 rb14") == std::vector<int>{4})); }
    { InvertedIndex index; index.addDocument(1, {"ra15", "rb15"}); index.addDocument(2, {"ra15", "rb15", "rc15"}); index.addDocument(3, {"ra15", "rc15"}); QueryProcessor processor; assert((processor.search(index, "rc15 ra15 rb15") == std::vector<int>{2})); }
    { InvertedIndex index; index.addDocument(1, {"ra16", "rb16", "rc16"}); index.addDocument(2, {"ra16", "rb16"}); index.addDocument(3, {"ra16", "rb16", "rc16"}); QueryProcessor processor; assert((processor.search(index, "rb16 rc16 ra16") == std::vector<int>{1, 3})); }
    { InvertedIndex index; index.addDocument(1, {"ra17", "rb17"}); index.addDocument(2, {"rb17", "rc17"}); index.addDocument(3, {"ra17", "rc17"}); index.addDocument(4, {"ra17", "rb17", "rc17"}); QueryProcessor processor; assert((processor.search(index, "ra17 rb17 rc17") == std::vector<int>{4})); }
    { InvertedIndex index; index.addDocument(1, {"ra18", "rb18"}); index.addDocument(2, {"ra18", "rb18", "rc18"}); index.addDocument(3, {"ra18", "rc18"}); QueryProcessor processor; assert((processor.search(index, "rc18 rb18 ra18") == std::vector<int>{2})); }
    { InvertedIndex index; index.addDocument(1, {"ra19", "rb19", "rc19"}); index.addDocument(2, {"ra19", "rb19"}); index.addDocument(3, {"ra19", "rb19", "rc19"}); QueryProcessor processor; assert((processor.search(index, "rc19 ra19 rb19") == std::vector<int>{1, 3})); }
    { InvertedIndex index; index.addDocument(1, {"ra20", "rb20"}); index.addDocument(2, {"rb20", "rc20"}); index.addDocument(3, {"ra20", "rc20"}); index.addDocument(4, {"ra20", "rb20", "rc20"}); QueryProcessor processor; assert((processor.search(index, "rb20 rc20 ra20") == std::vector<int>{4})); }
    { InvertedIndex index; index.addDocument(1, {"ra21", "rb21"}); index.addDocument(2, {"ra21", "rb21", "rc21"}); index.addDocument(3, {"ra21", "rc21"}); QueryProcessor processor; assert((processor.search(index, "ra21 rc21 rb21") == std::vector<int>{2})); }
    { InvertedIndex index; index.addDocument(1, {"ra22", "rb22", "rc22"}); index.addDocument(2, {"ra22", "rb22"}); index.addDocument(3, {"ra22", "rb22", "rc22"}); QueryProcessor processor; assert((processor.search(index, "rc22 rb22 ra22") == std::vector<int>{1, 3})); }
    return 0;
}
