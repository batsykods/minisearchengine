#include "TopK.h"
#include <algorithm>
std::vector<SearchResult> TopK::select(std::vector<SearchResult> results, std::size_t limit) const {
    std::sort(results.begin(), results.end());
    if (results.size() > limit) results.resize(limit);
    return results;
}
