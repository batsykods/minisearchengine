#include <cassert>
#include "Tokenizer.h"
int main(){ const auto t=Tokenizer{}.tokenize("alpha..."); assert(t.size()==1&&t[0]=="alpha"); }