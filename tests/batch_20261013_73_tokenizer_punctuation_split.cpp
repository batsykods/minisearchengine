#include <cassert>
#include <vector>
#include <string>
#include "Tokenizer.h"
int main() {
    Tokenizer t; auto v=t.tokenize("alpha,beta"); assert(v.size()==2 && v[0]=="alpha" && v[1]=="beta");
    return 0;
}
