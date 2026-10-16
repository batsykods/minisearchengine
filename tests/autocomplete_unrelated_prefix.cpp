#include <cassert>
#include "AutocompleteIndex.h"
int main() { AutocompleteIndex index; index.insert("apple"); index.insert("berry"); assert(index.suggest("app").size() == 1); }
