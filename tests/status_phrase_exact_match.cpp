#include <cassert>
#include <string>
#include <vector>
#include "PhraseMatcher.h"

int main() {
    PhraseMatcher matcher; assert(matcher.matches({"a", "b", "c"}, {"b", "c"}));
    return 0;
}
