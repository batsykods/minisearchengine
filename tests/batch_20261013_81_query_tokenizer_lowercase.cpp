#include <cassert>
#include <vector>
#include <string>
#include "QueryTokenizer.h"
int main() {
    QueryTokenizer t; auto v=t.tokenize("SEARCH"); assert(v.size()==1 && v[0]=="search");
    return 0;
}
