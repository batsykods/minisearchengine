#include "SearchEngine.h"
#include <cassert>
int main(){ SearchEngine e; e.addDocument(7,{"red","fox"}); e.addDocument(2,{"blue","fox"}); assert(e.search("fox").size()==2); }