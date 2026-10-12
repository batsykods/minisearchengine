#include "IndexStats.h"
#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"

int main() {
    InvertedIndex i; i.addDocument(1,{"a"}); i.addDocument(2,{"b"}); auto s=collectIndexStats(i); assert(s.documents==2);
    return 0;
}
