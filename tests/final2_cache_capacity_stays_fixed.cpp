#include <cassert>
#include <vector>
#include "SearchCache.h"
int main(){ SearchCache c(1); c.put("a",{1}); c.put("b",{2}); assert(c.capacity()==1 && c.size()==1); return 0; }
