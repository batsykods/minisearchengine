#include <cassert>
#include "Tokenizer.h"
#include "InvertedIndex.h"
int main(){Tokenizer t;InvertedIndex i;i.addDocument(9,t.tokenize("alpha beta"));assert(i.search("omega").empty());assert(i.search("alpha").front()==9);return 0;}
