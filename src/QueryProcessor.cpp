#include "QueryProcessor.h"

#include "Tokenizer.h"

#include <algorithm>
#include <iterator>
#include <utility>

std::vector<std::string> QueryProcessor::split(const std::string& query) {
    auto terms = Tokenizer{}.tokenize(query);
    std::sort(terms.begin(), terms.end());
    terms.erase(std::unique(terms.begin(), terms.end()), terms.end());
    return terms;
}

std::vector<int> QueryProcessor::search(const InvertedIndex& index, const std::string& query) const {
    auto terms = split(query);
    if (terms.empty()) return {};

    std::sort(terms.begin(), terms.end(), [&index](const std::string& left, const std::string& right) {
        const auto leftFrequency = index.documentFrequency(left);
        const auto rightFrequency = index.documentFrequency(right);
        return leftFrequency == rightFrequency ? left < right : leftFrequency < rightFrequency;
    });

    std::vector<int> results = index.search(terms.front());
    for (std::size_t i = 1; i < terms.size(); ++i) {
        const auto& postings = index.search(terms[i]);
        std::vector<int> intersection;
        intersection.reserve(std::min(results.size(), postings.size()));
        std::set_intersection(results.begin(), results.end(), postings.begin(), postings.end(),
                              std::back_inserter(intersection));
        results = std::move(intersection);
        if (results.empty()) break;
    }
    std::sort(results.begin(), results.end());
    return results;
}
