#include <cassert>
#include "TextNormalization.h"

int main() {
    assert(text_normalization::isAlphaNumeric(static_cast<unsigned char>('A')));
    assert(text_normalization::isAlphaNumeric(static_cast<unsigned char>('z')));
    assert(text_normalization::isAlphaNumeric(static_cast<unsigned char>('7')));
    assert(!text_normalization::isAlphaNumeric(static_cast<unsigned char>('-')));
    assert(!text_normalization::isAlphaNumeric(static_cast<unsigned char>(' ')));

    assert(text_normalization::toLower(static_cast<unsigned char>('A')) == 'a');
    assert(text_normalization::toLower(static_cast<unsigned char>('Z')) == 'z');
    assert(text_normalization::toLower(static_cast<unsigned char>('m')) == 'm');
    assert(text_normalization::toLower(static_cast<unsigned char>('4')) == '4');
    return 0;
}
