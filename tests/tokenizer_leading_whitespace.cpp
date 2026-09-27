#include "Tokenizer.h"
#include <cassert>
int main(){ Tokenizer t; auto v=t.tokenize("   alpha beta"); assert(v.size()==2 && v[0]=="alpha" && v[1]=="beta"); }