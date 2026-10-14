#include <cassert>
#include "Tokenizer.h"
int main(){ Tokenizer t; auto r=t.tokenize("abc123"); assert(r.size()==1 && r[0]=="abc123"); }
