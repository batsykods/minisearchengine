#include "IndexStats.h"
#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"

int main() {
    InvertedIndex i; i.addDocument(1,{"a"}); i.addDocument(2,{"a","b"}); auto s=collectIndexStats(i); assert(s.documents==2 && s.terms==2);
    return 0;
}
