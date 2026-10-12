#include "QueryTokenizer.h"
#include <cassert>
#include <string>
#include <vector>
int main() {
    QueryTokenizer t; assert((t.tokenize("HELLO WORLD")==std::vector<std::string>{"hello","world"}));
    return 0;
}
