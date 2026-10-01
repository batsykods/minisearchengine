#include <cassert>
#include "QueryProcessor.h"
int main(){ InvertedIndex i; i.addDocument(1,{"a"}); assert(QueryProcessor{}.search(i,"!!!").empty()); }