#include "Tokenizer.h"
#include <cassert>

int main() {
    const Tokenizer tokenizer;
    assert(tokenizer.tokenize("").empty());
    assert(tokenizer.tokenize("!!! --- ...").empty());
    return 0;
}
