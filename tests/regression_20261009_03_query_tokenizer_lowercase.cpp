#include "QueryTokenizer.h"
#include <cassert>
int main(){ QueryTokenizer t; auto v=t.tokenize("CPLUS Search"); assert(v.size()==2 && v[0]=="cplus" && v[1]=="search"); }