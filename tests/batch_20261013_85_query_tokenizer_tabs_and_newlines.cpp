#include <cassert>
#include <vector>
#include <string>
#include "QueryTokenizer.h"
int main() {
    QueryTokenizer t; auto v=t.tokenize("one\ttwo\nthree"); assert(v.size()==3);
    return 0;
}
