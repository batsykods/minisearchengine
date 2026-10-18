#include "BM25Ranker.h"

#include <algorithm>
#include <cmath>
#include <unordered_map>
#include <unordered_set>

std::vector<SearchResult> BM25Ranker::rank(const InvertedIndex& index, const std::vector<std::string>& terms,
                                           double k1, double b) const {
    if (index.documentCount() == 0 || terms.empty() || !std::isfinite(k1) || !std::isfinite(b) ||
        k1 < 0.0 || b < 0.0 || b > 1.0) return {};
    const double averageLength = index.averageDocumentLength();
    const double safeAverageLength = averageLength > 0.0 ? averageLength : 1.0;
    std::unordered_map<int, double> scores;
    std::unordered_set<std::string> uniqueTerms(terms.begin(), terms.end());
    const double documentCount = static_cast<double>(index.documentCount());

    for (const auto& term : uniqueTerms) {
        const auto& postings = index.search(term);
        if (postings.empty()) continue;
        const double df = static_cast<double>(postings.size());
        const double idf = std::log(1.0 + (documentCount - df + 0.5) / (df + 0.5));
        for (int documentId : postings) {
            const double tf = static_cast<double>(index.termFrequency(term, documentId));
            const double length = static_cast<double>(index.documentLength(documentId));
            const double normalization = k1 * (1.0 - b + b * length / safeAverageLength);
            scores[documentId] += idf * (tf * (k1 + 1.0)) / (tf + normalization);
        }
    }

    std::vector<SearchResult> results;
    results.reserve(scores.size());
    for (const auto& [documentId, score] : scores) results.push_back({documentId, score});
    std::sort(results.begin(), results.end());
    return results;
}
