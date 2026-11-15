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
    const auto terms = split(query);
    if (terms.empty()) return {};

    std::vector<std::pair<std::size_t, std::string>> orderedTerms;
    orderedTerms.reserve(terms.size());
    for (const auto& term : terms) {
        orderedTerms.emplace_back(index.documentFrequency(term), term);
    }

    std::sort(orderedTerms.begin(), orderedTerms.end(),
              [](const auto& left, const auto& right) {
                  if (left.first != right.first) return left.first < right.first;
                  return left.second < right.second;
              });

    std::vector<int> results = index.search(orderedTerms.front().second);
    for (std::size_t i = 1; i < orderedTerms.size(); ++i) {
        const auto& postings = index.search(orderedTerms[i].second);
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
