#include <cassert>
#include "Tokenizer.h"
int main(){Tokenizer t;auto v=t.tokenize("  a   b  ");assert(v.size()==2);return 0;}
