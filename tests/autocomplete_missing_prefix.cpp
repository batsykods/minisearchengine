#include <cassert>
#include "AutocompleteIndex.h"
int main() { AutocompleteIndex index; index.insert("apple"); assert(index.suggest("z").empty()); }
