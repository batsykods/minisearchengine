#include "PhraseMatcher.h"
#include <cassert>
int main(){ PhraseMatcher m; assert(m.matches({"a","b","c"},{"a","b","c"})); assert(!m.matches({"a","b","c"},{"a","b","c","d"})); }