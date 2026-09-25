#include <cassert>
#include "Tokenizer.h"
int main(){Tokenizer t;auto v=t.tokenize("--alpha--");assert(v.size()==1&&v[0]=="alpha");return 0;}
