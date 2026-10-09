#include "SearchEngine.h"
#include <cassert>
int main(){ SearchEngine e; assert(e.search("x").empty() && e.rankedSearch("x").empty()); }