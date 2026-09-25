#include <cassert>
#include "Tokenizer.h"
#include "InvertedIndex.h"
int main(){Tokenizer t;InvertedIndex i;i.addDocument(1,t.tokenize("alpha"));assert(i.search("omega").empty()&&i.search("alpha").size()==1);return 0;}
