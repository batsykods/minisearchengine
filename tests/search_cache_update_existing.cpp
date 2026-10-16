#include <cassert>
#include <vector>
#include "SearchCache.h"
int main() { SearchCache cache(2); cache.put("a", {1}); cache.put("a", {2}); std::vector<int> out; assert(cache.get("a", out)); assert((out == std::vector<int>{2})); assert(cache.size() == 1); }
