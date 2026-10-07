#include "Tokenizer.h"
int main() {
    Tokenizer t; auto x=t.tokenize("engine"); return x.size()==1&&x[0]=="engine"?0:1;
}
