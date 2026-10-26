#include <cassert>
#include <string>
#include <vector>
#include "SearchCache.h"

int main() {
    SearchCache cache(2); std::vector<int> result; assert(!cache.get("x", result));
    return 0;
}
