#include <cassert>
#include "QueryProcessor.h"
int main(){ InvertedIndex i; i.addDocument(8,{"beta gamma"}); assert(QueryProcessor{}.search(i,"alpha beta").empty()); }