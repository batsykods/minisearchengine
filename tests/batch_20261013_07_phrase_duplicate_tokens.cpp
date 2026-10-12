#include "PhraseMatcher.h"
#include <cassert>
#include <string>
#include <vector>
int main() {
    PhraseMatcher m; assert(m.matches({"x","x","y"},{"x","x"}));
    return 0;
}
