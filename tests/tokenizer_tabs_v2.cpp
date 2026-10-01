#include <cassert>
#include "Tokenizer.h"
int main(){ auto t=Tokenizer{}.tokenize("one\ttwo\tthree"); assert(t.size()==3); }