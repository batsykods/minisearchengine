#include <cassert>
#include "PhraseMatcher.h"
int main(){PhraseMatcher p; assert(!p.matches({"search","mini","engine"},{"search","engine"}));}
