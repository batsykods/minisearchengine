#include <cassert>
#include "QueryTokenizer.h"
int main(){QueryTokenizer q; auto x=q.tokenize("search, engine!"); assert(x.size()==2); assert(x[0]=="search"); assert(x[1]=="engine");return 0;}
