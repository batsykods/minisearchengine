#include <cassert>
#include <vector>
#include "AutocompleteIndex.h"
int main() { AutocompleteIndex index; index.insert("b"); index.insert("a"); assert((index.suggest("") == std::vector<std::string>{"a", "b"})); }
