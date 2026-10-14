#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"
#include "IndexStats.h"
int main() {
    InvertedIndex i; i.addDocument(1, {"alpha"}); i.addDocument(2, {"beta"}); auto s=collectIndexStats(i); assert(s.documents==2 && s.terms==2);
    return 0;
}
