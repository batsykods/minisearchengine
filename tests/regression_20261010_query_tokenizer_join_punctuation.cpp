#include "QueryTokenizer.h"
#include <cassert>
int main(){ QueryTokenizer t; auto v=t.tokenize("alpha-beta"); assert(v.size()==1 && v[0]=="alphabeta"); }