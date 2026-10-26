#include <cassert>
#include <string>
#include <vector>
#include "PhraseMatcher.h"

int main() {
    PhraseMatcher matcher; assert(matcher.matches({"x", "a", "b", "y"}, {"a", "b"}));
    return 0;
}
