#include <cassert>
#include "QueryTokenizer.h"
int main(){QueryTokenizer q; auto x=q.tokenize("C++17"); assert(x.size()==1); assert(x[0]=="c17");return 0;}
