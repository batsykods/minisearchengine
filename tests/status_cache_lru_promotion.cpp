#include <cassert>
#include <string>
#include <vector>
#include "SearchCache.h"

int main() {
    SearchCache cache(2); cache.put("a", {1}); cache.put("b", {2}); std::vector<int> result; assert(cache.get("a", result)); cache.put("c", {3}); assert(cache.get("a", result)); assert(!cache.get("b", result));
    return 0;
}
