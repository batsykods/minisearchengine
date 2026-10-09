#include <cassert>
#include "PhraseMatcher.h"
int main(){PhraseMatcher p; assert(!p.matches({"engine","search"},{"search","engine"}));}