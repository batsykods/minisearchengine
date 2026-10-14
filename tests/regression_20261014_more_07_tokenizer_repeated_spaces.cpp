#include <cassert>
#include <cstdio>
#include <fstream>
#include <string>
#include <vector>
#include "Tokenizer.h"
int main(){ Tokenizer t; auto v=t.tokenize("one    two"); assert(v.size()==2); return 0; }
