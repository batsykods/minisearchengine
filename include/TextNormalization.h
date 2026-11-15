#ifndef TEXT_NORMALIZATION_H
#define TEXT_NORMALIZATION_H

namespace text_normalization {
constexpr bool isAlphaNumeric(unsigned char character) noexcept {
    return (character >= '0' && character <= '9') ||
           (character >= 'A' && character <= 'Z') ||
           (character >= 'a' && character <= 'z');
}

constexpr char toLower(unsigned char character) noexcept {
    if (character >= 'A' && character <= 'Z') {
        return static_cast<char>(character + ('a' - 'A'));
    }
    return static_cast<char>(character);
}
}

#endif
