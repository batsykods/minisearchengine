#include <cassert>
#include "PhraseMatcher.h"
int main(){ PhraseMatcher m; assert(m.matches({"x","a","b","y"}, {"a","b"})); }
