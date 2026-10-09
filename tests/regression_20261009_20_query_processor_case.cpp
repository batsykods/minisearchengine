#include "QueryProcessor.h"
#include <cassert>
int main(){ InvertedIndex i; i.addDocument(1,{"alpha"}); QueryProcessor q; auto v=q.search(i,"ALPHA"); assert(v.size()==1 && v[0]==1); }