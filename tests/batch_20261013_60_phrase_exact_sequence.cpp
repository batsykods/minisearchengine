#include <cassert>
#include "PhraseMatcher.h"
int main() {
    PhraseMatcher m; assert(m.matches({"a","b"}, {"a","b"}));
    return 0;
}
