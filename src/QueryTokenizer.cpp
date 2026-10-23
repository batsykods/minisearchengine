#include "QueryTokenizer.h"

#include "Tokenizer.h"

std::vector<std::string> QueryTokenizer::tokenize(const std::string& query) const {
    return Tokenizer{}.tokenize(query);
}
