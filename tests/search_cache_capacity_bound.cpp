#include <cassert>
#include "SearchCache.h"
int main() { SearchCache cache(2); cache.put("a", {1}); cache.put("b", {2}); cache.put("c", {3}); assert(cache.size() == 2); }
