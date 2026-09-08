#include "InvertedIndex.h"

void InvertedIndex::addDocument(int documentId, const std::vector<std::string>& tokens) {
    for (const std::string& token : tokens) {
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
