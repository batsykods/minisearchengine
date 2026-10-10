#include "QueryProcessor.h"
#include <cassert>
int main(){ InvertedIndex i; i.addDocument(1,{"alpha","beta"}); QueryProcessor q; auto a=q.search(i,"alpha beta"); auto b=q.search(i,"beta alpha"); assert(a==b); }