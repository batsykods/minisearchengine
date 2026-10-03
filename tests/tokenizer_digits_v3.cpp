#include <cassert>
#include "Tokenizer.h"
int main(){ const auto t=Tokenizer{}.tokenize("C++ 2026"); assert(t.size()==2&&t[0]=="c"&&t[1]=="2026"); }