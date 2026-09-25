#include <cassert>
#include "Tokenizer.h"
#include "InvertedIndex.h"
int main(){Tokenizer t;InvertedIndex i;i.addDocument(1,t.tokenize("alpha beta"));i.addDocument(2,t.tokenize("alpha gamma"));assert(i.documentFrequency("alpha")==2);return 0;}
