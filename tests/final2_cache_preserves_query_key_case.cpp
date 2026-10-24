#include <cassert>
#include <vector>
#include "SearchCache.h"
int main(){ SearchCache c(2); c.put("Alpha",{1}); std::vector<int> out; assert(!c.get("alpha",out)); return 0; }
