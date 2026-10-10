#include "QueryProcessor.h"
#include <cassert>
int main(){ InvertedIndex i; i.addDocument(1,{"alpha"}); i.addDocument(2,{"alpha","beta"}); QueryProcessor q; auto r=q.search(i,"alpha alpha"); assert(r.size()==2); }