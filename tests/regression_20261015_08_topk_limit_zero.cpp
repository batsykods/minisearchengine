#include <cassert>
#include "SearchResult.h"
#include "TopK.h"
int main(){ TopK t; assert(t.select({{1,3.0}},0).empty()); }
