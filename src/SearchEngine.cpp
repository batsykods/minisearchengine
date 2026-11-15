#include "SearchEngine.h"
void SearchEngine::addDocument(int documentId, const std::vector<std::string>& tokens) {
    index.addDocument(documentId, tokens);
}

void SearchEngine::addDocument(int documentId, const std::string& content) {
    index.addDocument(documentId, queryTokenizer.tokenize(content));
}

void SearchEngine::addDocument(const Document& document) {
    addDocument(document.getId(), document.getContent());
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

std::vector<SearchResult> SearchEngine::bm25Search(const std::string& query, double k1, double b) const {
    return bm25Ranker.rank(index, queryTokenizer.tokenize(query), k1, b);
}
