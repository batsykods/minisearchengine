#include <cassert>
#include "Tokenizer.h"
int main(){Tokenizer t;auto v=t.tokenize("C++17");assert(!v.empty()&&v[0]=="c");return 0;}
