#include "SearchEngine.h"
#include <cassert>
int main(){ SearchEngine e; e.addDocument(3,{"alpha"}); auto v=e.search("ALPHA!!!"); assert(v.size()==1 && v[0]==3); }