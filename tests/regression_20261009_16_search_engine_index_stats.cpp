#include "SearchEngine.h"
#include <cassert>
int main(){ SearchEngine e; e.addDocument(1,{"one","two","one"}); assert(e.getIndex().documentCount()==1 && e.getIndex().termCount()==2); }