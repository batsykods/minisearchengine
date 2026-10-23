#include "TopK.h"

#include <algorithm>

std::vector<SearchResult> TopK::select(std::vector<SearchResult> results, std::size_t limit) const {
    if (limit == 0) return {};
    if (results.size() > limit) {
        std::partial_sort(results.begin(), results.begin() + limit, results.end());
        results.resize(limit);
    } else {
        std::sort(results.begin(), results.end());
    }
    return results;
}
