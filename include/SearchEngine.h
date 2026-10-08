#ifndef SEARCH_ENGINE_H
#define SEARCH_ENGINE_H
#include <string>
#include <vector>
#include "DocumentLoader.h"
#include "InvertedIndex.h"
#include "QueryTokenizer.h"
#include "Ranker.h"
class SearchEngine {
private:
    InvertedIndex index;
    QueryTokenizer queryTokenizer;
    Ranker ranker;
public:
    void addDocument(int documentId, const std::vector<std::string>& tokens);
    std::vector<int> search(const std::string& query) const;
    std::vector<SearchResult> rankedSearch(const std::string& query) const;
    const InvertedIndex& getIndex() const;
};
#endif
