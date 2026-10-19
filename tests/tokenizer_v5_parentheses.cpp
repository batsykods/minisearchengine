#include "Tokenizer.h"
int main(){ Tokenizer t; auto v=t.tokenize("alpha(beta)"); return (v.size()==2)?0:1;}
