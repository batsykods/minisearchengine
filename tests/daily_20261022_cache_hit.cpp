#include "SearchCache.h"
#include <cassert>
int main(){ SearchCache c(2); c.put("q",{3,1}); std::vector<int> v; assert(c.get("q",v) && v.size()==2 && v[0]==3); }