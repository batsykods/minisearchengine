#include "SearchCache.h"
#include <cassert>
int main(){ SearchCache c(3); c.put("a",{1}); c.clear(); std::vector<int> v; assert(c.size()==0 && !c.get("a",v)); }