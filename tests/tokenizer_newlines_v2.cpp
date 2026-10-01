#include <cassert>
#include "Tokenizer.h"
int main(){ auto t=Tokenizer{}.tokenize("one\ntwo\nthree"); assert(t.size()==3); }