#include <cassert>
#include <cstdio>
#include <fstream>
#include <string>
#include <vector>
#include "Tokenizer.h"
int main(){ Tokenizer t; auto v=t.tokenize("A1 B2"); assert(v.size()==2 && v[0]=="a1" && v[1]=="b2"); return 0; }
