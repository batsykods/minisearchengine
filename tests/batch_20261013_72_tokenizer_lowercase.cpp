#include <cassert>
#include <vector>
#include <string>
#include "Tokenizer.h"
int main() {
    Tokenizer t; auto v=t.tokenize("HELLO"); assert(v.size()==1 && v[0]=="hello");
    return 0;
}
