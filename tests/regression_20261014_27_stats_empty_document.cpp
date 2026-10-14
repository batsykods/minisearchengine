#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"
#include "IndexStats.h"
int main() {
    InvertedIndex i; i.addDocument(4, {}); auto s=collectIndexStats(i); assert(s.documents==1 && s.terms==0);
    return 0;
}
