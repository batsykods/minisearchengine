#include <cassert>
#include <string>
#include <vector>
#include "PhraseMatcher.h"

int main() {
    PhraseMatcher matcher;
    const std::vector<std::string> tokens{"the", "quick", "brown", "fox", "quick", "brown"};
    assert(matcher.matches(tokens, {"quick", "brown"}));
    assert(matcher.matches(tokens, {"the", "quick", "brown", "fox"}));
    assert(!matcher.matches(tokens, {"brown", "quick"}));
    assert(!matcher.matches(tokens, {"quick", "fox"}));
    assert(!matcher.matches(tokens, {}));
    assert(!matcher.matches({}, {"quick"}));
    assert(!matcher.matches(tokens, {"the", "quick", "brown", "fox", "jumps"}));
    return 0;
}
