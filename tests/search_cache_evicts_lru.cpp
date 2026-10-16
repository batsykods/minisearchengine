#include <cassert>
#include <vector>
#include "SearchCache.h"
int main() { SearchCache cache(2); cache.put("a", {1}); cache.put("b", {2}); std::vector<int> out; cache.get("a", out); cache.put("c", {3}); assert(cache.get("a", out)); assert(!cache.get("b", out)); }
