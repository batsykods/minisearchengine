#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"
#include "IndexStats.h"
int main() {
    InvertedIndex i; i.addDocument(1, {"alpha"}); i.addDocument(1, {"beta"}); auto s=collectIndexStats(i); assert(s.documents==1 && s.terms==2);
    return 0;
}
