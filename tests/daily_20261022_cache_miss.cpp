#include "SearchCache.h"
#include <cassert>
int main(){ SearchCache c(2); std::vector<int> v; assert(!c.get("missing",v)); }