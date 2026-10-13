#include <cassert>
#include "PhraseMatcher.h"
int main() {
    PhraseMatcher m; assert(!m.matches({"a"}, {}));
    return 0;
}
