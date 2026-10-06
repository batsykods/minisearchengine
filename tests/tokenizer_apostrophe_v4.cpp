#include "Tokenizer.h"
#include <cassert>
int main(){Tokenizer t;auto r=t.tokenize("don't");assert(r.size()==2&&r[0]=="don"&&r[1]=="t");}