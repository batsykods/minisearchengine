#include "Tokenizer.h"
#include <cassert>
int main(){Tokenizer t;assert((t.tokenize(" one\t two\nthree ")==std::vector<std::string>{"one","two","three"}));}