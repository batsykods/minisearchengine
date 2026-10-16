#include <cassert>
#include <vector>
#include "SearchCache.h"
int main() { SearchCache cache(2); std::vector<int> out{8}; assert(!cache.get("missing", out)); assert((out == std::vector<int>{8})); }
