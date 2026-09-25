#include <cassert>
#include "Tokenizer.h"
int main(){Tokenizer t;auto v=t.tokenize("Hello");assert(v.size()==1&&v[0]=="hello");return 0;}
