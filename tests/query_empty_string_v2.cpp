#include <cassert>
#include "QueryProcessor.h"
int main(){ InvertedIndex i; i.addDocument(16,{"alpha"}); assert(QueryProcessor{}.search(i,"").empty()); }