#include <cassert>
#include <vector>
#include "SearchResult.h"
#include "TopK.h"
int main(){ TopK t; assert(t.select({},4).empty()); }
