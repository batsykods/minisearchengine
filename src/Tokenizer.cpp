#include "Tokenizer.h"
#include <cctype>

std::vector<std::string> Tokenizer::tokenize(const std::string& text) const {
    std::vector<std::string> tokens;
    std::string current;

    for (char character : text) {
        if (std::isalnum(static_cast<unsigned char>(character))) {
            current += static_cast<char>(std::tolower(static_cast<unsigned char>(character)));
        } else if (!current.empty()) {
            tokens.push_back(current);
            current.clear();
        }
    }

    if (!current.empty()) {
        tokens.push_back(current);
    }

    return tokens;
}
