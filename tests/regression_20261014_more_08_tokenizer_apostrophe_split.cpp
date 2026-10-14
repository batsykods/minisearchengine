#include <cassert>
#include <cstdio>
#include <fstream>
#include <string>
#include <vector>
#include "Tokenizer.h"
int main(){ Tokenizer t; auto v=t.tokenize("can't"); assert(v.size()==2 && v[0]=="can" && v[1]=="t"); return 0; }
