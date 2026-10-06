#include "QueryProcessor.h"
#include <cassert>
int main(){InvertedIndex i;i.addDocument(1,{"alpha"});assert(QueryProcessor().search(i,"alpha").size()==1);}