#include <cassert>
#include <vector>
#include <string>
#include "QueryTokenizer.h"
int main() {
    QueryTokenizer t; auto v=t.tokenize("cat cat"); assert(v.size()==2 && v[0]==v[1]);
    return 0;
}
