#include <cassert>
#include <vector>
#include "SearchCache.h"

int main() {
    SearchCache cache(2);
    std::vector<int> output{99};
    assert(cache.capacity() == 2);
    assert(cache.size() == 0);
    assert(!cache.get("missing", output));
    assert((output == std::vector<int>{99}));

    cache.put("alpha", {1, 2});
    cache.put("beta", {3});
    assert(cache.size() == 2);
    assert(cache.get("alpha", output));
    assert((output == std::vector<int>{1, 2}));

    cache.put("gamma", {4, 5});
    assert(cache.size() == 2);
    assert(cache.get("alpha", output));
    assert(!cache.get("beta", output));
    assert(cache.get("gamma", output));
    assert((output == std::vector<int>{4, 5}));

    cache.put("alpha", {7});
    assert(cache.get("alpha", output));
    assert((output == std::vector<int>{7}));

    cache.clear();
    assert(cache.size() == 0);
    assert(!cache.get("alpha", output));

    SearchCache disabled(0);
    disabled.put("ignored", {1});
    assert(disabled.size() == 0);
    assert(!disabled.get("ignored", output));
    return 0;
}
