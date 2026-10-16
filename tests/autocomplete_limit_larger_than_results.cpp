#include <cassert>
#include <vector>
#include "AutocompleteIndex.h"
int main() { AutocompleteIndex index; index.insert("map"); assert((index.suggest("m", 99) == std::vector<std::string>{"map"})); }
