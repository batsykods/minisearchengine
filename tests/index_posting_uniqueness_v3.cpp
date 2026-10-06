#include "InvertedIndex.h"
#include <cassert>
int main() { InvertedIndex i; i.addDocument(3, {"alpha","alpha"}); i.addDocument(3, {"alpha"}); const auto& p=i.search("alpha"); assert(p.size()==1 && p[0]==3); }