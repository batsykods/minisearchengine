#include <cassert>
#include "PhraseMatcher.h"
int main(){ assert(!PhraseMatcher{}.matches({"a","x","b"},{"a","b"})); return 0; }
