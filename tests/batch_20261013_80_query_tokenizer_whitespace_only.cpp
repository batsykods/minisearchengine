#include <cassert>
#include <vector>
#include <string>
#include "QueryTokenizer.h"
int main() {
    QueryTokenizer t; assert(t.tokenize("   \t  ").empty());
    return 0;
}
