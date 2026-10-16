#include <cassert>
#include <vector>
#include "AutocompleteIndex.h"
int main() { AutocompleteIndex index; index.insert("apple"); assert(index.size() == 1); assert((index.suggest("app") == std::vector<std::string>{"apple"})); }
