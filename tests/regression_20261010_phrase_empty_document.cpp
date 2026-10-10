#include "PhraseMatcher.h"
#include <cassert>
int main(){ PhraseMatcher m; assert(!m.matches({},{"a"})); assert(!m.matches({},{})); }