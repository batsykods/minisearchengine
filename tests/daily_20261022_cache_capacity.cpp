#include "SearchCache.h"
#include <cassert>
int main(){ SearchCache c(4); assert(c.capacity()==4); c.put("a",{1}); assert(c.size()==1); }