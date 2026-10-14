#include <cassert>
#include "PhraseMatcher.h"
int main(){ PhraseMatcher m; assert(!m.matches({"a","x","b"}, {"a","b"})); }
