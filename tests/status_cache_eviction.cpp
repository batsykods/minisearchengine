#include <cassert>
#include <string>
#include <vector>
#include "SearchCache.h"

int main() {
    SearchCache cache(2); cache.put("a", {1}); cache.put("b", {2}); cache.put("c", {3}); std::vector<int> result; assert(!cache.get("a", result)); assert(cache.get("c", result));
    return 0;
}
