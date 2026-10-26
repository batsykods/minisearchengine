#include <cassert>
#include <string>
#include <vector>
#include "SearchCache.h"

int main() {
    SearchCache cache(2); cache.put("x", {1}); cache.put("x", {2}); std::vector<int> result; assert(cache.get("x", result)); assert((result == std::vector<int>{2}));
    return 0;
}
