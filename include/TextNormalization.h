#ifndef TEXT_NORMALIZATION_H
#define TEXT_NORMALIZATION_H

#include <cctype>

namespace text_normalization {
inline bool isAlphaNumeric(unsigned char character) noexcept {
    return std::isalnum(character) != 0;
}

inline char toLower(unsigned char character) noexcept {
    return static_cast<char>(std::tolower(character));
}
}

#endif
