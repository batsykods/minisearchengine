#include <cassert>
#include "Tokenizer.h"
int main(){ Tokenizer t; auto r=t.tokenize("alpha,,,beta"); assert(r.size()==2 && r[0]=="alpha" && r[1]=="beta"); }
