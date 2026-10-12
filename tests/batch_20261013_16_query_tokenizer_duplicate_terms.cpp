#include "QueryTokenizer.h"
#include <cassert>
#include <string>
#include <vector>
int main() {
    QueryTokenizer t; assert((t.tokenize("go go")==std::vector<std::string>{"go","go"}));
    return 0;
}
