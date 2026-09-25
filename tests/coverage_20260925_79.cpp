#include <cassert>
#include "Tokenizer.h"
#include "InvertedIndex.h"
int main(){Tokenizer t;InvertedIndex i;i.addDocument(1,t.tokenize("alpha"));i.addDocument(2,t.tokenize("beta"));i.addDocument(3,t.tokenize("gamma"));assert(i.documentCount()==3);return 0;}
