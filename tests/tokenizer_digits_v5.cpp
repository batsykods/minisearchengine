#include "Tokenizer.h"
int main() {
    Tokenizer t; auto x=t.tokenize("12345"); return x.size()==1&&x[0]=="12345"?0:1;
}
