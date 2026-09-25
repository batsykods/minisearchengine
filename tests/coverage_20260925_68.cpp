#include <cassert>
#include "Tokenizer.h"
int main(){Tokenizer t;auto v=t.tokenize("hello.world,test");assert(v.size()==3&&v[0]=="hello"&&v[1]=="world"&&v[2]=="test");return 0;}
