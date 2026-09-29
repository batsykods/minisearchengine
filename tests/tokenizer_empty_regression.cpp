#include <cassert>
#include "Tokenizer.h"
int main(){ assert(Tokenizer{}.tokenize("").empty()); assert(Tokenizer{}.tokenize("!!!").empty()); }