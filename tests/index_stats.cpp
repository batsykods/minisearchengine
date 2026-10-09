#include <cassert>
#include "IndexStats.h"
int main(){InvertedIndex i; i.addDocument(1,{"cpp","search"}); auto s=collectIndexStats(i); assert(s.documents==1); assert(s.terms==2);}
