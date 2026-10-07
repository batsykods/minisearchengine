#include "Tokenizer.h"
int main() {
    Tokenizer t; auto x=t.tokenize("a\nb"); return x.size()==2?0:1;
}
