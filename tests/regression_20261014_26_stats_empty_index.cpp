#include <cassert>
#include <string>
#include <vector>
#include "InvertedIndex.h"
#include "IndexStats.h"
int main() {
    InvertedIndex i; auto s=collectIndexStats(i); assert(s.documents==0 && s.terms==0);
    return 0;
}
