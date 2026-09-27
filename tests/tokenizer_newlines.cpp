#include "Tokenizer.h"
#include <cassert>
int main(){ Tokenizer t; auto v=t.tokenize("alpha\nbeta"); assert(v.size()==2); }