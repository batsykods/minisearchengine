#include <cassert>
#include "QueryProcessor.h"
int main(){ InvertedIndex i; i.addDocument(9,{"alpha gamma"}); assert(QueryProcessor{}.search(i,"alpha beta gamma").empty()); }