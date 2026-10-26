#include <cassert>
#include <string>
#include <vector>
#include "PhraseMatcher.h"

int main() {
    PhraseMatcher matcher; assert(!matcher.matches({"a", "b"}, {}));
    return 0;
}
