#include <cassert>
#include <string>
#include <vector>
#include "QueryTokenizer.h"
int main(){ QueryTokenizer t; auto v=t.tokenize("red red"); assert(v.size()==2 && v[0]=="red" && v[1]=="red"); return 0; }
