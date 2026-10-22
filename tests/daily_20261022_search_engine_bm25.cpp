#include "SearchEngine.h"
#include <cassert>
int main(){ SearchEngine e; e.addDocument(1,{"alpha"}); e.addDocument(2,{"alpha","alpha","noise"}); auto v=e.bm25Search("alpha"); assert(v.size()==2); }