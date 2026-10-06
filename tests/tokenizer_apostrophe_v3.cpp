#include "Tokenizer.h"
#include <cassert>
#include <vector>
#include <string>
int main() { Tokenizer t; assert((t.tokenize("don't stop")) == std::vector<std::string>{"don","t","stop"}); }