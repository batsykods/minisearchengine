#include "InvertedIndex.h"
#include "Tokenizer.h"
#include <cassert>
#include <vector>
#include <string>
int main() {
    Tokenizer t; assert((t.tokenize("a,,,b...c") == std::vector<std::string>{"a","b","c"}));
    return 0;
}
