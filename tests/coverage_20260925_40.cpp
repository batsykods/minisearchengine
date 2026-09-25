#include <cassert>
#include "Tokenizer.h"
#include "InvertedIndex.h"
int main(){Tokenizer t;InvertedIndex i;i.addDocument(1,t.tokenize("alpha beta"));i.addDocument(2,t.tokenize("alpha"));auto p=i.search("alpha");assert(p.size()==2&&p[0]==1&&p[1]==2);return 0;}
