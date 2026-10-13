#include <cassert>
#include <vector>
#include <string>
#include "QueryTokenizer.h"
int main() {
    QueryTokenizer t; auto v=t.tokenize("hello, world!"); assert(v.size()==2 && v[0]=="hello" && v[1]=="world");
    return 0;
}
