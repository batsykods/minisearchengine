#include <cassert>
#include "Tokenizer.h"
#include "InvertedIndex.h"
int main(){Tokenizer t;InvertedIndex i;i.addDocument(4,t.tokenize("alpha beta"));i.addDocument(1,t.tokenize("beta gamma"));auto&p=i.search("beta");assert(p.size()==2&&p[0]==1&&p[1]==4);return 0;}
