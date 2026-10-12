#include "PhraseMatcher.h"
#include <cassert>
#include <string>
#include <vector>
int main() {
    PhraseMatcher m; assert(m.matches({"alpha","beta"},{"beta"}));
    return 0;
}
