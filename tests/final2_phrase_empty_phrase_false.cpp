#include <cassert>
#include "PhraseMatcher.h"
int main(){ assert(!PhraseMatcher{}.matches({"a","b"},{})); return 0; }
