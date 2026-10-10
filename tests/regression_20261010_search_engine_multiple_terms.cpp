#include "SearchEngine.h"
#include <cassert>
int main(){ SearchEngine e; e.addDocument(1,{"alpha"}); e.addDocument(2,{"beta"}); auto v=e.search("alpha beta"); assert(v.size()==2); }