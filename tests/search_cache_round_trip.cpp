#include <cassert>
#include <vector>
#include "SearchCache.h"
int main() { SearchCache cache(2); cache.put("q", {1, 3}); std::vector<int> out; assert(cache.get("q", out)); assert((out == std::vector<int>{1, 3})); }
