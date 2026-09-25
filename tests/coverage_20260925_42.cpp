#include <cassert>
#include "InvertedIndex.h"
int main(){InvertedIndex i;i.addDocument(1,{"alpha","beta"});assert(i.contains("alpha")&&!i.contains("omega"));return 0;}
