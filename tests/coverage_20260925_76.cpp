#include <cassert>
#include "Tokenizer.h"
#include "InvertedIndex.h"
int main(){Tokenizer t;InvertedIndex i;auto tokens=t.tokenize("Alpha beta alpha");i.addDocument(11,tokens);assert(i.termFrequency("alpha",11)==2);return 0;}
