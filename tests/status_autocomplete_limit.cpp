#include <cassert>
#include <string>
#include <vector>
#include "AutocompleteIndex.h"

int main() {
    AutocompleteIndex index; index.insert("ape"); index.insert("apple"); index.insert("apricot"); assert(index.suggest("ap", 2).size() == 2);
    return 0;
}
