#include "SearchCache.h"
#include <cassert>
int main(){ SearchCache c(1); c.put("empty",{}); std::vector<int> v{9}; assert(c.get("empty",v) && v.empty()); }