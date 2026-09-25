#include <cassert>
#include "Tokenizer.h"
#include "InvertedIndex.h"
int main(){Tokenizer t;InvertedIndex i;i.addDocument(1,t.tokenize("alpha"));auto before=i.documentCount();i.search("missing");assert(i.documentCount()==before);return 0;}
