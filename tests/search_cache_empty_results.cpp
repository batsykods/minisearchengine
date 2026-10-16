#include <cassert>
#include <vector>
#include "SearchCache.h"
int main() { SearchCache cache(2); cache.put("empty", {}); std::vector<int> out{1}; assert(cache.get("empty", out)); assert(out.empty()); }
