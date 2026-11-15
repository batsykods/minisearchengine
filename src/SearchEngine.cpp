#include "SearchEngine.h"

void SearchEngine::addDocument(int documentId, const std::vector<std::string>& tokens) {
    index.addDocument(documentId, tokens);
    for (const auto& token : tokens) {
        autocompleteIndex.insert(token);
    }
}

void SearchEngine::addTextDocument(int documentId, const std::string& content) {
    addDocument(documentId, queryTokenizer.tokenize(content));
}

void SearchEngine::addDocument(const Document& document) {
    addTextDocument(document.getId(), document.getContent());
}

std::vector<int> SearchEngine::search(const std::string& query) const {
    const auto ranked = rankedSearch(query);
    std::vector<int> ids;
    ids.reserve(ranked.size());

    for (const auto& result : ranked) {
        ids.push_back(result.documentId);
    }

    return ids;
}

std::vector<SearchResult> SearchEngine::rankedSearch(const std::string& query) const {
    return ranker.tfidf(index, queryTokenizer.tokenize(query));
}

std::vector<SearchResult> SearchEngine::topKSearch(const std::string& query, std::size_t limit) const {
    return TopK{}.select(rankedSearch(query), limit);
}

std::vector<SearchResult> SearchEngine::bm25Search(const std::string& query, double k1, double b) const {
    return bm25Ranker.rank(index, queryTokenizer.tokenize(query), k1, b);
}

std::vector<SearchResult> SearchEngine::bm25TopKSearch(const std::string& query, std::size_t limit,
                                                       double k1, double b) const {
    return TopK{}.select(bm25Search(query, k1, b), limit);
}

std::vector<std::string> SearchEngine::suggest(const std::string& prefix, std::size_t limit) const {
    return autocompleteIndex.suggest(prefix, limit);
}

const InvertedIndex& SearchEngine::getIndex() const {
    return index;
}
