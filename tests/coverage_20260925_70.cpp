#include <cassert>
#include "Tokenizer.h"
int main(){Tokenizer t;auto v=t.tokenize("a/b\\c");assert(v.size()==3);return 0;}
