#include <cassert>
#include "Tokenizer.h"
#include "InvertedIndex.h"
int main(){Tokenizer t;InvertedIndex a,b;a.addDocument(1,t.tokenize("alpha beta"));b.addDocument(1,t.tokenize("alpha beta"));assert(a.search("alpha")==b.search("alpha"));return 0;}
