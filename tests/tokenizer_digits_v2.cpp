#include <cassert>
#include "Tokenizer.h"
int main(){ auto t=Tokenizer{}.tokenize("123 456"); assert(t[0]=="123"&&t[1]=="456"); }