#include "SearchEngine.h"
#include <cassert>
int main(){ SearchEngine e; e.addDocument(1,{"word"}); e.addDocument(2,{"word","word"}); auto v=e.rankedSearch("word"); assert(v.size()==2 && v.front().documentId==2); }