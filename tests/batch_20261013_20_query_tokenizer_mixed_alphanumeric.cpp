#include "QueryTokenizer.h"
#include <cassert>
#include <string>
#include <vector>
int main() {
    QueryTokenizer t; assert((t.tokenize("a1 B2")==std::vector<std::string>{"a1","b2"}));
    return 0;
}
