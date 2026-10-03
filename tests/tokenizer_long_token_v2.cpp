#include <cassert>
#include "Tokenizer.h"
int main(){ const auto t=Tokenizer{}.tokenize("searchenginecomponent"); assert(t.size()==1&&t[0]=="searchenginecomponent"); }