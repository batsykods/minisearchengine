#include <cassert>
#include <vector>
#include <string>
#include "Tokenizer.h"
int main() {
    Tokenizer t; assert(t.tokenize("").empty());
    return 0;
}
