#include <cassert>
#include "Tokenizer.h"
int main(){ auto t=Tokenizer{}.tokenize("-alpha-beta-"); assert((t==std::vector<std::string>{"alpha","beta"})); }