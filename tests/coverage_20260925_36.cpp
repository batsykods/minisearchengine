#include <cassert>
#include "Tokenizer.h"
#include "InvertedIndex.h"
int main(){Tokenizer t;InvertedIndex i;i.addDocument(1,t.tokenize("hello,world!"));assert(i.search("hello").size()==1&&i.search("world").size()==1);return 0;}
