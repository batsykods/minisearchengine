#include <cassert>
#include "Tokenizer.h"
int main(){Tokenizer t;auto v=t.tokenize("Alpha123");assert(v.size()==1&&v[0]=="alpha123");return 0;}
