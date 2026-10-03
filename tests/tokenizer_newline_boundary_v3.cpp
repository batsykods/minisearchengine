#include <cassert>
#include "Tokenizer.h"
int main(){ const auto t=Tokenizer{}.tokenize("alpha\nbeta"); assert(t.size()==2&&t[0]=="alpha"&&t[1]=="beta"); }