#include "Tokenizer.h"
#include <cassert>
int main(){ Tokenizer t; auto v=t.tokenize("Alpha BETA"); assert(v.size()==2); }