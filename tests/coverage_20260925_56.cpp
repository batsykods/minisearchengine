#include <cassert>
#include "Tokenizer.h"
#include "InvertedIndex.h"
int main(){Tokenizer t;InvertedIndex i;i.addDocument(5,t.tokenize("alpha alpha beta"));assert(i.termFrequency("alpha",5)==2&&i.termFrequency("beta",5)==1);return 0;}
