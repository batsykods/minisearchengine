#include <cassert>
#include <string>
#include "AutocompleteIndex.h"

int main() {
    AutocompleteIndex index; index.insert("apple"); index.insert("apple"); assert(index.size() == 1);
    return 0;
}
