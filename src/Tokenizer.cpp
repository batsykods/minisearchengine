#include "Tokenizer.h"
#include "TextNormalization.h"


std::vector<std::string> Tokenizer::tokenize(const std::string& text) const {
    std::vector<std::string> tokens;
    std::string current;
    tokens.reserve(text.empty() ? 0 : text.size() / 5 + 1);

    for (char character : text) {
        if (text_normalization::isAlphaNumeric(static_cast<unsigned char>(character))) {
            current += text_normalization::toLower(static_cast<unsigned char>(character));
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
