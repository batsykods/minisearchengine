#ifndef SEARCH_CACHE_H
#define SEARCH_CACHE_H

#include <cstddef>
#include <list>
#include <string>
#include <unordered_map>
#include <vector>

class SearchCache {
private:
    using Entry = std::pair<std::string, std::vector<int>>;
    std::size_t maxEntries;
    std::list<Entry> recency;
    std::unordered_map<std::string, std::list<Entry>::iterator> lookup;

public:
    explicit SearchCache(std::size_t capacity);
    bool get(const std::string& query, std::vector<int>& results);
    void put(const std::string& query, const std::vector<int>& results);
    void clear();
    std::size_t size() const;
    std::size_t capacity() const;
};

#endif
