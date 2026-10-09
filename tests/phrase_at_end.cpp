#include <cassert>
#include "PhraseMatcher.h"
int main(){PhraseMatcher p; assert(p.matches({"cpp","search","engine"},{"search","engine"}));}