#include <cassert>
#include "Tokenizer.h"
int main(){ auto t=Tokenizer{}.tokenize("CPP Search ENGINE"); assert((t==std::vector<std::string>{"cpp","search","engine"})); }