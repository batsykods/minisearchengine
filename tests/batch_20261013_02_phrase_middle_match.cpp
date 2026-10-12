#include "PhraseMatcher.h"
#include <cassert>
#include <string>
#include <vector>
int main() {
    PhraseMatcher m; assert(m.matches({"a","b","c"},{"b","c"}));
    return 0;
}
