#include <cassert>
#include <string>
#include <vector>
#include "AutocompleteIndex.h"

int main() {
    AutocompleteIndex index; index.insert("apple"); assert(index.suggest("a", 0).empty());
    return 0;
}
