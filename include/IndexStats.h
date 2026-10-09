#ifndef INDEX_STATS_H
#define INDEX_STATS_H
#include <cstddef>
#include "InvertedIndex.h"
struct IndexStats {
    std::size_t documents;
    std::size_t terms;
};
IndexStats collectIndexStats(const InvertedIndex& index);
#endif
