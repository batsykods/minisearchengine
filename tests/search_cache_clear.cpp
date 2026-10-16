#include <cassert>
#include <vector>
#include "SearchCache.h"
int main() { SearchCache cache(2); cache.put("a", {1}); cache.clear(); std::vector<int> out; assert(!cache.get("a", out)); assert(cache.size() == 0); }
