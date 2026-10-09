#ifndef TOP_K_H
#define TOP_K_H
#include <vector>
#include "SearchResult.h"
class TopK {
public:
    std::vector<SearchResult> select(std::vector<SearchResult> results, std::size_t limit) const;
};
#endif
