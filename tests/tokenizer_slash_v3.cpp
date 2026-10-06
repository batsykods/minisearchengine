#include "Tokenizer.h"
#include <cassert>
#include <vector>
#include <string>
int main() { Tokenizer t; assert((t.tokenize("api/v1/search")) == std::vector<std::string>{"api","v1","search"}); }