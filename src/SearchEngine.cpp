#include "SearchEngine.h"
#include <algorithm>
void SearchEngine::addDocument(int documentId, const std::vector<std::string>& tokens) {
    index.addDocument(documentId, tokens);
}
std::vector<int> SearchEngine::search(const std::string& query) const {
    const auto ranked = rankedSearch(query);
    std::vector<int> ids;
    ids.reserve(ranked.size());
    for (const auto& result : ranked) ids.push_back(result.documentId);
    return ids;
}
std::vector<SearchResult> SearchEngine::rankedSearch(const std::string& query) const {
    return ranker.tfidf(index, queryTokenizer.tokenize(query));
}
const InvertedIndex& SearchEngine::getIndex() const {
    return index;
}
