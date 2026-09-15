#ifndef QUERY_PROCESSOR_H
#define QUERY_PROCESSOR_H

#include <string>
#include <vector>

#include "InvertedIndex.h"

class QueryProcessor {
public:
    std::vector<int> search(const InvertedIndex& index, const std::string& query) const;

private:
    static std::string normalizeTerm(const std::string& term);
    static std::vector<std::string> split(const std::string& query);
};

#endif
