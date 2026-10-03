#include <cassert>
#include "Tokenizer.h"
int main(){ const auto t=Tokenizer{}.tokenize("abc123"); assert(t.size()==1&&t[0]=="abc123"); }