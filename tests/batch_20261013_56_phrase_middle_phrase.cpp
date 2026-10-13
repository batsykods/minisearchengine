#include <cassert>
#include "PhraseMatcher.h"
int main() {
    PhraseMatcher m; assert(m.matches({"zero","alpha","beta","end"}, {"alpha","beta"}));
    return 0;
}
