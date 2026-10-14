#include <cassert>
#include <cstdio>
#include <fstream>
#include <string>
#include <vector>
#include "Tokenizer.h"
int main(){ Tokenizer t; auto v=t.tokenize("alpha\nbeta"); assert(v.size()==2 && v[1]=="beta"); return 0; }
