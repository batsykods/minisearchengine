#include <cassert>
#include <string>
#include <vector>
#include "AutocompleteIndex.h"

int main() {
    AutocompleteIndex index;
    index.insert("apple");
    assert(index.suggest("z").empty());
    return 0;
}
