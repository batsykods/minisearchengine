#include "InvertedIndex.h"

#include <algorithm>
#include <unordered_map>

void InvertedIndex::addDocument(int documentId, const std::vector<std::string>& tokens) {
    documentIds.insert(documentId);
    std::unordered_map<std::string, std::size_t> batchFrequencies;
    batchFrequencies.reserve(tokens.size());

    for (const std::string& token : tokens) {
        if (token.empty()) continue;
        ++documentLengths[documentId];
        ++batchFrequencies[token];
    }

    for (const auto& [token, count] : batchFrequencies) {
        auto& postings = index[token];
        auto& termFrequencies = frequencies[token];
        termFrequencies[documentId] += count;
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
    if (termIterator == frequencies.end()) return 0;
    const auto documentIterator = termIterator->second.find(documentId);
    return documentIterator == termIterator->second.end() ? 0 : documentIterator->second;
}

std::size_t InvertedIndex::documentLength(int documentId) const {
    const auto found = documentLengths.find(documentId);
    return found == documentLengths.end() ? 0 : found->second;
}

std::size_t InvertedIndex::totalTokenCount() const {
    std::size_t total = 0;
    for (const auto& [documentId, length] : documentLengths) {
        (void)documentId;
        total += length;
    }
    return total;
}

double InvertedIndex::averageDocumentLength() const {
    if (documentIds.empty()) return 0.0;
    return static_cast<double>(totalTokenCount()) / static_cast<double>(documentIds.size());
}
