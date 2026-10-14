#include <cassert>
#include <string>
#include <vector>
#include "QueryTokenizer.h"
int main(){ QueryTokenizer t; assert(t.tokenize("  \t\n ").empty()); return 0; }
