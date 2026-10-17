#ifndef BM25_RANKER_H
#define BM25_RANKER_H

#include <string>
#include <vector>
#include "InvertedIndex.h"
#include "SearchResult.h"

class BM25Ranker {
public:
    std::vector<SearchResult> rank(const InvertedIndex& index, const std::vector<std::string>& terms,
                                   double k1 = 1.2, double b = 0.75) const;
};

#endif
