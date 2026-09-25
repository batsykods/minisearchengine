#include <cassert>
#include "Tokenizer.h"
#include "InvertedIndex.h"
int main(){Tokenizer t;InvertedIndex i;i.addDocument(1,t.tokenize("alpha"));i.addDocument(2,t.tokenize("alpha beta"));assert(i.termFrequency("beta",1)==0);return 0;}
