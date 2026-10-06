#include "Tokenizer.h"
#include <cassert>
int main(){Tokenizer t;auto r=t.tokenize("api/v1");assert(r.size()==2&&r[0]=="api"&&r[1]=="v1");}