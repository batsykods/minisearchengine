#include <cassert>
#include <vector>
#include "SearchCache.h"
int main() { SearchCache cache(3); std::vector<int> out; assert(!cache.get("q", out)); assert(cache.size() == 0); }
