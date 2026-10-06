#include "Tokenizer.h"
#include <cassert>
int main(){Tokenizer t;auto r=t.tokenize("a---b___c");assert(r.size()==3&&r[0]=="a"&&r[1]=="b"&&r[2]=="c");}