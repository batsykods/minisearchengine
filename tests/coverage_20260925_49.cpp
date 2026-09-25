#include <cassert>
#include "Tokenizer.h"
int main(){Tokenizer t;auto v=t.tokenize("one\ttwo\nthree");assert(v.size()==3);return 0;}
