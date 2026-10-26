#include <cassert>
#include <string>
#include "AutocompleteIndex.h"

int main() {
    AutocompleteIndex index; index.insert("apple"); index.insert("ape"); assert(index.size() == 2); assert(!index.empty());
    return 0;
}
