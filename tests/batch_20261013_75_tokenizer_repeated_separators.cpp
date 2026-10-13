#include <cassert>
#include <vector>
#include <string>
#include "Tokenizer.h"
int main() {
    Tokenizer t; auto v=t.tokenize("a,,,b"); assert(v.size()==2 && v[0]=="a" && v[1]=="b");
    return 0;
}
