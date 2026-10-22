#include "SearchCache.h"
#include <cassert>
int main(){ SearchCache c(2); c.put("a",{1}); c.put("b",{2}); std::vector<int> v; assert(c.get("a",v)); c.put("c",{3}); assert(c.get("a",v)); assert(!c.get("b",v)); }