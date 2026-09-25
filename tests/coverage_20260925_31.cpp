#include <cassert>
#include "Tokenizer.h"
#include "InvertedIndex.h"
int main(){Tokenizer t;InvertedIndex i;for(auto&s:t.tokenize("Alpha beta")){} i.addDocument(1,t.tokenize("Alpha beta"));assert(i.documentCount()==1);return 0;}
