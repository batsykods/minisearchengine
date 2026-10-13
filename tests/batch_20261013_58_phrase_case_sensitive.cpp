#include <cassert>
#include "PhraseMatcher.h"
int main() {
    PhraseMatcher m; assert(!m.matches({"Alpha"}, {"alpha"}));
    return 0;
}
