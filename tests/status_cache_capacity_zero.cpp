#include <cassert>
#include <string>
#include <vector>
#include "SearchCache.h"

int main() {
    SearchCache cache(0); cache.put("x", {1}); std::vector<int> result; assert(!cache.get("x", result)); assert(cache.size() == 0);
    return 0;
}
