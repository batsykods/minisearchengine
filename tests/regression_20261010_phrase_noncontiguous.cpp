#include "PhraseMatcher.h"
#include <cassert>
int main(){ PhraseMatcher m; assert(!m.matches({"alpha","x","beta"},{"alpha","beta"})); }