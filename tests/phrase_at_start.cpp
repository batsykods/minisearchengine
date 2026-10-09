#include <cassert>
#include "PhraseMatcher.h"
int main(){PhraseMatcher p; assert(p.matches({"search","engine","cpp"},{"search","engine"}));}