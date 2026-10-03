#include <cassert>
#include "QueryProcessor.h"
int main(){ InvertedIndex i; i.addDocument(17,{"alpha"}); assert(QueryProcessor{}.search(i," \t\n ").empty()); }