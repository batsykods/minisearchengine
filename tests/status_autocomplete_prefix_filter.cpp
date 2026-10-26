#include <cassert>
#include <string>
#include "AutocompleteIndex.h"

int main() {
    AutocompleteIndex index; index.insert("apple"); index.insert("ape"); index.insert("bat"); assert((index.suggest("ap") == std::vector<std::string>{"ape", "apple"}));
    return 0;
}
