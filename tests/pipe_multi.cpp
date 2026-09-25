#include "Tokenizer.h"
#include "InvertedIndex.h"
#include "QueryProcessor.h"
#include <cassert>
int main(){Tokenizer t;InvertedIndex x;x.addDocument(1,t.tokenize("fast search"));x.addDocument(2,t.tokenize("search engine"));QueryProcessor q;assert((q.search(x,"search")==std::vector<int>{1,2}));assert((q.search(x,"search engine")==std::vector<int>{2}));}