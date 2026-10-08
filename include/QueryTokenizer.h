#ifndef QUERY_TOKENIZER_H
#define QUERY_TOKENIZER_H
#include <string>
#include <vector>
class QueryTokenizer {
public:
    std::vector<std::string> tokenize(const std::string& query) const;
};
#endif
