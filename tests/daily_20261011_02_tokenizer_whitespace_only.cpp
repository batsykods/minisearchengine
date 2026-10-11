#include "Tokenizer.h"
#include <cassert>
#include <vector>
#include <string>

int main() {
    Tokenizer t; assert(t.tokenize(" \t\n  ").empty());
    return 0;
}
