#include <cassert>
#include "Tokenizer.h"
int main(){Tokenizer t;auto v=t.tokenize("123 456");assert(v.size()==2&&v[0]=="123");return 0;}
