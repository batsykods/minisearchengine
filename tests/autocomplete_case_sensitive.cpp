#include <cassert>
#include "AutocompleteIndex.h"
int main() { AutocompleteIndex index; index.insert("Apple"); assert(index.suggest("a").empty()); assert(index.suggest("A").size() == 1); }
