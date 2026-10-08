#include <cassert>
#include "SearchEngine.h"
int main(){SearchEngine e; e.addDocument(1,{"search"}); auto x=e.search("search"); assert(x.size()==1); assert(x[0]==1);return 0;}
