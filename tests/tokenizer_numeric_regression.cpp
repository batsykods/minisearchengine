#include <cassert>
#include "Tokenizer.h"
int main(){ auto t=Tokenizer{}.tokenize("C++17 2026 42"); assert((t==std::vector<std::string>{"c","17","2026","42"})); }