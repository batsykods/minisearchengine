#include <cassert>
#include "Tokenizer.h"
int main(){ const auto t=Tokenizer{}.tokenize("a"); assert(t.size()==1&&t[0]=="a"); }