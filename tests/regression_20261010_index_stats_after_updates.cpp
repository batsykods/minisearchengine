#include "IndexStats.h"
#include <cassert>
int main(){ InvertedIndex i; i.addDocument(1,{"alpha"}); i.addDocument(2,{"beta"}); i.addDocument(2,{"gamma"}); auto s=collectIndexStats(i); assert(s.documents==2 && s.terms==3); }