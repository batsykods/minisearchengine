#include "Tokenizer.h"
#include <cassert>
int main(){Tokenizer t;assert((t.tokenize("alpha,beta.gamma")==std::vector<std::string>{"alpha","beta","gamma"}));}