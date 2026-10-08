#include <cassert>
#include "QueryTokenizer.h"
int main(){QueryTokenizer q; auto x=q.tokenize("!!!"); assert(x.empty());return 0;}
