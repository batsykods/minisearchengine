#include "QueryTokenizer.h"
#include <cassert>
int main(){ QueryTokenizer t; auto v=t.tokenize("C++17 version 2"); assert(v.size()==3 && v[0]=="c17" && v[2]=="2"); }