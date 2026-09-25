#include <cassert>
#include "Tokenizer.h"
int main(){Tokenizer t;auto v=t.tokenize("123abc ABC123");assert(v.size()==2&&v[0]=="123abc"&&v[1]=="abc123");return 0;}
