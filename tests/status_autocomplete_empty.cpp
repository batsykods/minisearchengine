#include <cassert>
#include <string>
#include "AutocompleteIndex.h"

int main() {
    AutocompleteIndex index; assert(index.empty()); assert(index.size() == 0); assert(index.suggest("a").empty());
    return 0;
}
