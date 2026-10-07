#include "Tokenizer.h"
int main() {
    Tokenizer t; auto x=t.tokenize("SeArCh"); return x.size()==1&&x[0]=="search"?0:1;
}
