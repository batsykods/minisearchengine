#include "QueryTokenizer.h"
#include <cassert>
int main(){ QueryTokenizer t; auto v=t.tokenize(" alpha\t beta\n gamma "); assert(v.size()==3 && v[0]=="alpha" && v[2]=="gamma"); }