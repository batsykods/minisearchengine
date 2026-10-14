#include <cassert>
#include <cstdio>
#include <fstream>
#include <string>
#include <vector>
#include "Tokenizer.h"
int main(){ Tokenizer t; auto v=t.tokenize("one two three four five six"); assert(v.size()==6); return 0; }
