#include <cassert>
#include "AutocompleteIndex.h"
int main() { AutocompleteIndex index; index.insert("one"); index.insert("two"); index.insert("three"); assert(index.size() == 3); }
