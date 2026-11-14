#include <cassert>
#include <vector>
#include <string>
#include "QueryTokenizer.h"
int main() {
    QueryTokenizer t; auto v=t.tokenize("C++17"); assert(v.size()==2 && v[0]=="c" && v[1]=="17");
    return 0;
}
