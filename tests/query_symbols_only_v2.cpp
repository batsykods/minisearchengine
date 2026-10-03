#include <cassert>
#include "QueryProcessor.h"
int main(){ InvertedIndex i; i.addDocument(15,{"alpha"}); assert(QueryProcessor{}.search(i,"!@#$%^&*()").empty()); }