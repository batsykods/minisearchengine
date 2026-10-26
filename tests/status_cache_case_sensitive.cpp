#include <cassert>
#include <vector>
#include "SearchCache.h"

int main() {
    SearchCache cache(2);
    cache.put("Alpha", {1});
    std::vector<int> result;
    assert(!cache.get("alpha", result));
    assert(cache.get("Alpha", result));
    return 0;
}
