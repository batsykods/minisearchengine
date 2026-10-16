#include "SearchCache.h"

#include <utility>

SearchCache::SearchCache(std::size_t capacity) : maxEntries(capacity) {}

bool SearchCache::get(const std::string& query, std::vector<int>& results) {
    const auto found = lookup.find(query);
    if (found == lookup.end()) return false;
    recency.splice(recency.begin(), recency, found->second);
    results = found->second->second;
    return true;
}

void SearchCache::put(const std::string& query, const std::vector<int>& results) {
    if (maxEntries == 0) return;
    const auto found = lookup.find(query);
    if (found != lookup.end()) {
        found->second->second = results;
        recency.splice(recency.begin(), recency, found->second);
        return;
    }
    recency.emplace_front(query, results);
    lookup[query] = recency.begin();
    if (lookup.size() > maxEntries) {
        lookup.erase(recency.back().first);
        recency.pop_back();
    }
}

void SearchCache::clear() {
    lookup.clear();
    recency.clear();
}

std::size_t SearchCache::size() const { return lookup.size(); }
std::size_t SearchCache::capacity() const { return maxEntries; }
