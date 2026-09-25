#include <cassert>
#include "Tokenizer.h"
#include "InvertedIndex.h"
int main(){Tokenizer t;InvertedIndex i;i.addDocument(1,t.tokenize("alpha"));i.addDocument(2,t.tokenize("beta"));assert(i.search("alpha").size()==1&&i.search("beta").size()==1);return 0;}
