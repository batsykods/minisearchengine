#include "Tokenizer.h"
#include <cassert>
int main(){Tokenizer t;assert((t.tokenize("HeLLo WORLD")==std::vector<std::string>{"hello","world"}));}