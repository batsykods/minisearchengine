#include "QueryTokenizer.h"
#include <cassert>
#include <string>
#include <vector>
int main() {
    QueryTokenizer t; assert(t.tokenize(" \t\n").empty());
    return 0;
}
