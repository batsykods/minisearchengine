#include "SearchCache.h"
#include <cassert>
int main(){ SearchCache c(0); c.put("q",{1}); std::vector<int> v; assert(!c.get("q",v) && c.size()==0); }