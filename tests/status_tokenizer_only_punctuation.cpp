#include <cassert>
#include <string>
#include <vector>
#include "Tokenizer.h"

int main() {
    Tokenizer tokenizer; assert(tokenizer.tokenize("!@#$%^&*").empty());
    return 0;
}
