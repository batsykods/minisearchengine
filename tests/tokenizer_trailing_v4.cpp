#include "Tokenizer.h"
#include <cassert>
int main(){Tokenizer t;auto r=t.tokenize("alpha!!!");assert(r.size()==1&&r[0]=="alpha");}