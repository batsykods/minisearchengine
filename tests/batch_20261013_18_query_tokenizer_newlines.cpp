#include "QueryTokenizer.h"
#include <cassert>
#include <string>
#include <vector>
int main() {
    QueryTokenizer t; assert((t.tokenize("one\ntwo")==std::vector<std::string>{"one","two"}));
    return 0;
}
