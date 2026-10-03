#include <cassert>
#include "Tokenizer.h"
int main(){ const auto t=Tokenizer{}.tokenize("SEARCH ENGINE"); assert(t.size()==2&&t[0]=="search"&&t[1]=="engine"); }