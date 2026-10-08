#include <cassert>
#include "QueryTokenizer.h"
int main(){QueryTokenizer q; auto x=q.tokenize("CPP Search"); assert(x.size()==2); assert(x[0]=="cpp"); assert(x[1]=="search");return 0;}
