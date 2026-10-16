#include <cassert>
#include <vector>
#include "AutocompleteIndex.h"
int main() { AutocompleteIndex index; index.insert("ape"); index.insert("app"); index.insert("apple"); assert((index.suggest("ap", 2) == std::vector<std::string>{"ape", "app"})); }
