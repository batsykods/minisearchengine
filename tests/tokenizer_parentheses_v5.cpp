#include "Tokenizer.h"
int main() {
    Tokenizer t; auto x=t.tokenize("a(b)c"); return x.size()==3?0:1;
}
