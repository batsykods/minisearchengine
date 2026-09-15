#include "InvertedIndex.h"

void InvertedIndex::addDocument(int documentId, const std::vector<std::string>& tokens) {
    documentIds.insert(documentId);

    for (const std::string& token : tokens) {
        if (token.empty()) {
            continue;
        }

        auto& postings = index[token];

        if (postings.empty() || postings.back() != documentId) {
            postings.push_back(documentId);
        }
    }
}

const std::vector<int>& InvertedIndex::search(const std::string& term) const {
    static const std::vector<int> empty;

    const auto iterator = index.find(term);
    if (iterator == index.end()) {
        return empty;
    }

    return iterator->second;
}

bool InvertedIndex::contains(const std::string& term) const {
    return index.find(term) != index.end();
}

std::size_t InvertedIndex::termCount() const {
    return index.size();
}

std::size_t InvertedIndex::documentCount() const {
    return documentIds.size();
}

std::size_t InvertedIndex::documentFrequency(const std::string& term) const {
    const auto iterator = index.find(term);
    return iterator == index.end() ? 0 : iterator->second.size();
}
