#include "Tokenizer.h"
#include <cassert>
int main(){Tokenizer t;assert((t.tokenize("C++17 2026")==std::vector<std::string>{"c","17","2026"}));}