#include "Tokenizer.h"
int main() {
    Tokenizer t; auto x=t.tokenize("CPlus17"); return x.size()==1&&x[0]=="cplus17"?0:1;
}
