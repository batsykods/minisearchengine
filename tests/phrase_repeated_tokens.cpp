#include <cassert>
#include "PhraseMatcher.h"
int main(){PhraseMatcher p; assert(p.matches({"go","go","go"},{"go","go"}));}