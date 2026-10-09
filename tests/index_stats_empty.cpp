#include <cassert>
#include "IndexStats.h"
int main(){InvertedIndex i; auto s=collectIndexStats(i); assert(s.documents==0); assert(s.terms==0);}
