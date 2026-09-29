#include <cassert>
#include "Tokenizer.h"
int main(){ auto t=Tokenizer{}.tokenize("  alpha\t beta\n gamma  "); assert((t==std::vector<std::string>{"alpha","beta","gamma"})); }