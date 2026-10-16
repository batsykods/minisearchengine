#include <cassert>
#include "AutocompleteIndex.h"
int main() { AutocompleteIndex index; index.insert("apple"); assert(index.suggest("a", 0).empty()); }
