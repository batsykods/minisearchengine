#ifndef SEARCH_ENGINE_H
#define SEARCH_ENGINE_H
#include <string>
#include <vector>
#include "BM25Ranker.h"
#include "DocumentLoader.h"
#include "InvertedIndex.h"
#include "QueryTokenizer.h"
#include "Ranker.h"
class SearchEngine {
private:
    InvertedIndex index;
    QueryTokenizer queryTokenizer;
    Ranker ranker;
    BM25Ranker bm25Ranker;
public:
    void addDocument(int documentId, const std::vector<std::string>& tokens);
    std::vector<int> search(const std::string& query) const;
    std::vector<SearchResult> rankedSearch(const std::string& query) const;
    std::vector<SearchResult> bm25Search(const std::string& query, double k1 = 1.2, double b = 0.75) const;
    const InvertedIndex& getIndex() const;
};
#endif
