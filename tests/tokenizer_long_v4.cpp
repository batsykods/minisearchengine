#include "Tokenizer.h"
#include <cassert>
#include <string>
int main(){Tokenizer t;std::string s(4096,'x');auto r=t.tokenize(s);assert(r.size()==1&&r[0].size()==4096);}