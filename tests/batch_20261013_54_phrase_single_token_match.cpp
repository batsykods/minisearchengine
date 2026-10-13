#include <cassert>
#include "PhraseMatcher.h"
int main() {
    PhraseMatcher m; assert(m.matches({"alpha","beta"}, {"beta"}));
    return 0;
}
