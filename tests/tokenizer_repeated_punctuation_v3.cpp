#include "Tokenizer.h"
#include <cassert>
#include <vector>
#include <string>
int main() { Tokenizer t; assert((t.tokenize("one---two___three")) == std::vector<std::string>{"one","two","three"}); }