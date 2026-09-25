#include "QueryProcessor.h"

#include <algorithm>
#include <cctype>
#include <sstream>

std::string QueryProcessor::normalizeTerm(const std::string& term) {
    std::string normalized;
    normalized.reserve(term.size());

    for (char character : term) {
        if (std::isalnum(static_cast<unsigned char>(character))) {
            normalized += static_cast<char>(std::tolower(static_cast<unsigned char>(character)));
        }
    }

    return normalized;
}

std::vector<std::string> QueryProcessor::split(const std::string& query) {
    std::istringstream stream(query);
    std::vector<std::string> terms;
    std::string term;

    while (stream >> term) {
        const std::string normalized = normalizeTerm(term);
        if (!normalized.empty()) {
            terms.push_back(normalized);
        }
    }

    std::sort(terms.begin(), terms.end());
    terms.erase(std::unique(terms.begin(), terms.end()), terms.end());
    return terms;
}

std::vector<int> QueryProcessor::search(const InvertedIndex& index, const std::string& query) const {
    const auto terms = split(query);
    if (terms.empty()) {
        return {};
    }

    std::vector<int> results = index.search(terms.front());
    for (std::size_t i = 1; i < terms.size(); ++i) {
        const auto& postings = index.search(terms[i]);
        std::vector<int> intersection;
        std::set_intersection(results.begin(), results.end(), postings.begin(), postings.end(),
                              std::back_inserter(intersection));
        results = std::move(intersection);
        if (results.empty()) {
            break;
        }
    }

    std::sort(results.begin(), results.end());
    return results;
}
