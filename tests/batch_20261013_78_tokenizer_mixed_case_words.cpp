#include <cassert>
#include <vector>
#include <string>
#include "Tokenizer.h"
int main() {
    Tokenizer t; auto v=t.tokenize("MiXeD Case"); assert(v.size()==2 && v[0]=="mixed" && v[1]=="case");
    return 0;
}
