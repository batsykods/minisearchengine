#include <cassert>
#include "QueryTokenizer.h"
int main(){QueryTokenizer q; auto x=q.tokenize("a a a"); assert(x.size()==3);return 0;}
