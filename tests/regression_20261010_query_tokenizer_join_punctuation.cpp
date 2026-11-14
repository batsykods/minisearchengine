#include "QueryTokenizer.h"
#include <cassert>
int main(){ QueryTokenizer t; auto v=t.tokenize("alpha-beta"); assert(v.size()==2 && v[0]=="alpha" && v[1]=="beta"); }