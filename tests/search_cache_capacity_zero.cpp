#include <cassert>
#include <vector>
#include "SearchCache.h"
int main() { SearchCache cache(0); cache.put("q", {1}); std::vector<int> out; assert(!cache.get("q", out)); assert(cache.size() == 0); }
