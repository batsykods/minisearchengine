#include <cassert>
#include "AutocompleteIndex.h"
int main() { AutocompleteIndex index; index.insert("apple"); index.insert("apple"); assert(index.size() == 1); assert(index.suggest("").size() == 1); }
