#include <cassert>
#include <vector>
#include "SearchCache.h"
int main(){ SearchCache c(2); c.put("q",{1}); c.put("q",{2}); std::vector<int> out; assert(c.size()==1 && c.get("q",out) && out[0]==2); return 0; }
