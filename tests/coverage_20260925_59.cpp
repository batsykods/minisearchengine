#include <cassert>
#include "Tokenizer.h"
#include "InvertedIndex.h"
int main(){Tokenizer t;InvertedIndex i;i.addDocument(1,t.tokenize("alpha"));assert(i.documentCount()==1);i.addDocument(2,t.tokenize("beta"));assert(i.documentCount()==2);return 0;}
