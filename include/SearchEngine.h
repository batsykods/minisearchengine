#ifndef SEARCH_ENGINE_H
#define SEARCH_ENGINE_H
#include <cstddef>
#include <string>
#include <vector>
#include "BM25Ranker.h"
#include "Document.h"
#include "InvertedIndex.h"
#include "QueryTokenizer.h"
#include "Ranker.h"
#include "TopK.h"
class SearchEngine {
private:
    InvertedIndex index;
    QueryTokenizer queryTokenizer;
    Ranker ranker;
    BM25Ranker bm25Ranker;
public:
    void addDocument(int documentId, const std::vector<std::string>& tokens);
    void addDocument(int documentId, const std::string& content);
    void addDocument(const Document& document);
    std::vector<int> search(const std::string& query) const;
    std::vector<SearchResult> rankedSearch(const std::string& query) const;
    std::vector<SearchResult> topKSearch(const std::string& query, std::size_t limit) const;
    std::vector<SearchResult> bm25Search(const std::string& query, double k1 = 1.2, double b = 0.75) const;
    std::vector<SearchResult> bm25TopKSearch(const std::string& query, std::size_t limit,
                                             double k1 = 1.2, double b = 0.75) const;
    const InvertedIndex& getIndex() const;
};
#endif
