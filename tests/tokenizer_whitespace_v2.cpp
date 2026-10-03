#include <cassert>
#include "Tokenizer.h"
int main(){ assert(Tokenizer{}.tokenize(" \t\n ").empty()); }