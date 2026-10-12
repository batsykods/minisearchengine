#include "QueryTokenizer.h"
#include <cassert>
#include <string>
#include <vector>
int main() {
    QueryTokenizer t; assert(t.tokenize("!@#$").empty());
    return 0;
}
