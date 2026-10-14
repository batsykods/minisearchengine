#include <cassert>
#include "Tokenizer.h"
int main(){ Tokenizer t; auto r=t.tokenize("HELLO World"); assert(r.size()==2 && r[0]=="hello" && r[1]=="world"); }
