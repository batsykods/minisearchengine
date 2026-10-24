#include <cassert>
#include <vector>
#include "PhraseMatcher.h"
int main(){ assert(PhraseMatcher{}.matches({"x","a","b","y"},{"a","b"})); return 0; }
