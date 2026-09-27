#include "Tokenizer.h"
#include <cassert>
int main(){ Tokenizer t; auto v=t.tokenize("12345"); assert(v.size()==1 && v[0]=="12345"); }