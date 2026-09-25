#include "InvertedIndex.h"

#include <algorithm>

void InvertedIndex::addDocument(int documentId, const std::vector<std::string>& tokens) {
    documentIds.insert(documentId);

    for (const std::string& token : tokens) {
        if (token.empty()) {
            continue;
        }

        auto& postings = index[token];
        auto& termFrequencies = frequencies[token];
        ++termFrequencies[documentId];

        if (!std::binary_search(postings.begin(), postings.end(), documentId)) {
            postings.insert(std::lower_bound(postings.begin(), postings.end(), documentId), documentId);
        }
    }
}

const std::vector<int>& InvertedIndex::search(const std::string& term) const {
    static const std::vector<int> empty;
    const auto iterator = index.find(term);
    return iterator == index.end() ? empty : iterator->second;
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

std::size_t InvertedIndex::termFrequency(const std::string& term, int documentId) const {
    const auto termIterator = frequencies.find(term);
    if (termIterator == frequencies.end()) {
        return 0;
    }
    const auto documentIterator = termIterator->second.find(documentId);
    return documentIterator == termIterator->second.end() ? 0 : documentIterator->second;
}
