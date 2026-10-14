#include <cassert>
#include <cstdio>
#include <fstream>
#include <string>
#include <vector>
#include "Tokenizer.h"
int main(){ Tokenizer t; auto v=t.tokenize("abc"); assert(v.size()==1 && v[0]=="abc"); return 0; }
