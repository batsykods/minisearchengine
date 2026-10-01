#include <cassert>
#include "Tokenizer.h"
int main(){ auto t=Tokenizer{}.tokenize("\0abc",4); return 0; }