#include "IndexStats.h"
#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"

int main() {
    InvertedIndex i; i.addDocument(1,{"a","b","a"}); auto s=collectIndexStats(i); assert(s.terms==2);
    return 0;
}
