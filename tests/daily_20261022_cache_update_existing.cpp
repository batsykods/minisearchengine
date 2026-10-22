#include "SearchCache.h"
#include <cassert>
int main(){ SearchCache c(2); c.put("q",{1}); c.put("q",{2,3}); std::vector<int> v; assert(c.get("q",v) && v.size()==2 && v[0]==2 && c.size()==1); }