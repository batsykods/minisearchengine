#include <cassert>
#include <vector>
#include "AutocompleteIndex.h"
int main() { AutocompleteIndex index; index.insert("app"); index.insert("apple"); assert((index.suggest("app") == std::vector<std::string>{"app", "apple"})); }
