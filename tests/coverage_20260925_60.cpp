#include <cassert>
#include "Tokenizer.h"
#include "InvertedIndex.h"
int main(){Tokenizer t;InvertedIndex i;i.addDocument(1,t.tokenize("alpha beta"));assert(i.search("gamma").empty());assert(i.documentCount()==1);return 0;}
