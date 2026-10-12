#include "IndexStats.h"
#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"

int main() {
    InvertedIndex i; i.addDocument(1,{}); auto s=collectIndexStats(i); assert(s.documents==1 && s.terms==0);
    return 0;
}
