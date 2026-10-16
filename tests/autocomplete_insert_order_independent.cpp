#include <cassert>
#include <vector>
#include "AutocompleteIndex.h"
int main() { AutocompleteIndex index; index.insert("zebra"); index.insert("ant"); assert((index.suggest("") == std::vector<std::string>{"ant", "zebra"})); }
