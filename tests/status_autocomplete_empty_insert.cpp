#include <cassert>
#include <string>
#include "AutocompleteIndex.h"

int main() {
    AutocompleteIndex index; index.insert(""); assert(index.empty());
    return 0;
}
