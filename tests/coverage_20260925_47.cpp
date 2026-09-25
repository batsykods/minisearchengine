#include <cassert>
#include "Tokenizer.h"
int main(){Tokenizer t;auto v=t.tokenize("A-B_C");assert(v.size()==3);return 0;}
