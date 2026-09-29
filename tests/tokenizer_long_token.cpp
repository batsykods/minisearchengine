#include <cassert>
#include <string>
#include "Tokenizer.h"
int main(){ std::string s(1000,'A'); auto t=Tokenizer{}.tokenize(s); assert(t.size()==1&&t[0].size()==1000); }