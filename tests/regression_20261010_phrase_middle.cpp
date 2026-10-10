#include "PhraseMatcher.h"
#include <cassert>
int main(){ PhraseMatcher m; assert(m.matches({"x","alpha","beta","y"},{"alpha","beta"})); }