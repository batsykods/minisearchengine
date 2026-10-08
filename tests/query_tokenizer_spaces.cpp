#include <cassert>
#include "QueryTokenizer.h"
int main(){QueryTokenizer q; auto x=q.tokenize("  search   engine  "); assert(x.size()==2);return 0;}
