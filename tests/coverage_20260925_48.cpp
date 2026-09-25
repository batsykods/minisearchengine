#include <cassert>
#include "Tokenizer.h"
int main(){Tokenizer t;auto v=t.tokenize("UPPER lower");assert(v[0]=="upper"&&v[1]=="lower");return 0;}
