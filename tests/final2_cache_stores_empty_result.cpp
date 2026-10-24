#include <cassert>
#include <vector>
#include "SearchCache.h"
int main(){ SearchCache c(2); c.put("none",{}); std::vector<int> out{9}; assert(c.get("none",out) && out.empty()); return 0; }
