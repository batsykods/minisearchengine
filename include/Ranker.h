#ifndef RANKER_H
#define RANKER_H
#include <string>
#include <vector>
#include "InvertedIndex.h"
#include "SearchResult.h"
class Ranker {
public:
    std::vector<SearchResult> tfidf(const InvertedIndex& index, const std::vector<std::string>& terms) const;
private:
    static double inverseDocumentFrequency(std::size_t documentCount, std::size_t documentFrequency);
};
#endif
