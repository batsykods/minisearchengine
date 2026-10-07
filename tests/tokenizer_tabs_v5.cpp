#include "Tokenizer.h"
int main() {
    Tokenizer t; auto x=t.tokenize("a\tb"); return x.size()==2?0:1;
}
