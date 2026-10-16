#include <cassert>
#include "AutocompleteIndex.h"
int main() { AutocompleteIndex index; index.insert(""); assert(index.empty()); }
