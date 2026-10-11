#include "Tokenizer.h"
#include <cassert>
#include <vector>
#include <string>

int main() {
    Tokenizer t; std::string s(2048, 'x'); auto v=t.tokenize(s); assert(v.size()==1 && v[0]==s);
    return 0;
}
