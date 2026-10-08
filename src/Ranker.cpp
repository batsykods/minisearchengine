#include "Ranker.h"
#include <cmath>
#include <unordered_map>
#include <algorithm>
double Ranker::inverseDocumentFrequency(std::size_t documentCount, std::size_t documentFrequency) {
    if (documentCount == 0 || documentFrequency == 0) return 0.0;
    return std::log(1.0 + static_cast<double>(documentCount) / static_cast<double>(documentFrequency));
}
std::vector<SearchResult> Ranker::tfidf(const InvertedIndex& index, const std::vector<std::string>& terms) const {
    std::unordered_map<int,double> scores;
    for (const auto& term : terms) {
        const auto& postings = index.search(term);
        const double idf = inverseDocumentFrequency(index.documentCount(), postings.size());
        for (int documentId : postings) {
            scores[documentId] += static_cast<double>(index.termFrequency(term, documentId)) * idf;
        }
    }
    std::vector<SearchResult> results;
    results.reserve(scores.size());
    for (const auto& [documentId, score] : scores) results.push_back({documentId, score});
    std::sort(results.begin(), results.end());
    return results;
}
