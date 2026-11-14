#include "QueryTokenizer.h"
#include <cassert>
int main(){ QueryTokenizer t; auto v=t.tokenize("C++17 version 2"); assert(v.size()==4 && v[0]=="c" && v[1]=="17" && v[2]=="version" && v[3]=="2"); }