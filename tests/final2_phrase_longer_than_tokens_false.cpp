#include <cassert>
#include "PhraseMatcher.h"
int main(){ assert(!PhraseMatcher{}.matches({"a"},{"a","b"})); return 0; }
