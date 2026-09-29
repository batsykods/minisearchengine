#include <cassert>
#include "Tokenizer.h"
int main(){ auto t=Tokenizer{}.tokenize("search,engine! test."); assert((t==std::vector<std::string>{"search","engine","test"})); }