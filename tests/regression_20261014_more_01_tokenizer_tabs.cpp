#include <cassert>
#include <cstdio>
#include <fstream>
#include <string>
#include <vector>
#include "Tokenizer.h"
int main(){ Tokenizer t; auto v=t.tokenize("alpha\tbeta"); assert(v.size()==2 && v[0]=="alpha" && v[1]=="beta"); return 0; }
