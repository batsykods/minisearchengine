#include <cassert>
#include "Tokenizer.h"
int main(){Tokenizer t;auto v=t.tokenize("X");assert(v.size()==1&&v[0]=="x");return 0;}
