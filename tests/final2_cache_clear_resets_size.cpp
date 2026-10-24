#include <cassert>
#include <vector>
#include "SearchCache.h"
int main(){ SearchCache c(3); c.put("a",{1}); c.put("b",{2}); c.clear(); assert(c.size()==0); return 0; }
