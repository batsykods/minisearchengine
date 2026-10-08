#include "QueryTokenizer.h"
#include <cctype>
#include <sstream>
std::vector<std::string> QueryTokenizer::tokenize(const std::string& query) const {
    std::istringstream stream(query);
    std::vector<std::string> terms;
    std::string term;
    while (stream >> term) {
        std::string normalized;
        for (char c : term) {
            if (std::isalnum(static_cast<unsigned char>(c)))
                normalized += static_cast<char>(std::tolower(static_cast<unsigned char>(c)));
        }
        if (!normalized.empty()) terms.push_back(normalized);
    }
    return terms;
}
