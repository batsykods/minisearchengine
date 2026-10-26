#include <cassert>
#include <string>
#include <vector>
#include "SearchCache.h"

int main() {
    SearchCache cache(2); cache.put("a", {1}); cache.clear(); assert(cache.size() == 0); std::vector<int> result; assert(!cache.get("a", result));
    return 0;
}
