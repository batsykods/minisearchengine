#include <cassert>
#include <vector>
#include <string>
#include "QueryTokenizer.h"
int main() {
    QueryTokenizer t; auto v=t.tokenize("C++17"); assert(v.size()==1 && v[0]=="c17");
    return 0;
}
