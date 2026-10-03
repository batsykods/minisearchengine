#include <cassert>
#include "Tokenizer.h"
int main(){ const auto t=Tokenizer{}.tokenize("alpha,beta.gamma"); assert(t.size()==3&&t[0]=="alpha"&&t[1]=="beta"&&t[2]=="gamma"); }