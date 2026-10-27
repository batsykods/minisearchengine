#include <cassert>
#include <string>
#include <vector>
#include "AutocompleteIndex.h"

int main() {
    AutocompleteIndex index; index.insert("apricot"); index.insert("ape"); index.insert("apple"); assert((index.suggest("ap") == std::vector<std::string>{"ape", "apple", "apricot"}));
    return 0;
}
