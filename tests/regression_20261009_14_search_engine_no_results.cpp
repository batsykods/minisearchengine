#include "SearchEngine.h"
#include <cassert>
int main(){ SearchEngine e; e.addDocument(1,{"alpha"}); assert(e.search("missing").empty()); }