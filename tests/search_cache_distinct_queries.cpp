#include <cassert>
#include <vector>
#include "SearchCache.h"
int main() { SearchCache cache(3); cache.put("a", {1}); cache.put("A", {2}); std::vector<int> out; assert(cache.get("a", out) && out[0] == 1); assert(cache.get("A", out) && out[0] == 2); }
