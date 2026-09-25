#include <cassert>
#include "Tokenizer.h"
#include "InvertedIndex.h"
int main(){Tokenizer t;InvertedIndex i;i.addDocument(42,t.tokenize("unique"));assert(i.search("unique").front()==42);return 0;}
