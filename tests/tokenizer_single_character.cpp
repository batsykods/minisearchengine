#include "Tokenizer.h"
#include <cassert>
int main(){ Tokenizer t; auto v=t.tokenize("x"); assert(v.size()==1 && v[0]=="x"); }