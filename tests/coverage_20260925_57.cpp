#include <cassert>
#include "Tokenizer.h"
#include "InvertedIndex.h"
int main(){Tokenizer t;InvertedIndex i;i.addDocument(1,t.tokenize("alpha"));i.addDocument(3,t.tokenize("alpha"));i.addDocument(2,t.tokenize("alpha"));auto&p=i.search("alpha");assert(p[0]==1&&p[1]==2&&p[2]==3);return 0;}
