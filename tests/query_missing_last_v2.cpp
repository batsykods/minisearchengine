#include <cassert>
#include "QueryProcessor.h"
int main(){ InvertedIndex i; i.addDocument(10,{"alpha beta"}); assert(QueryProcessor{}.search(i,"alpha beta gamma").empty()); }