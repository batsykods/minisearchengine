#include <cassert>
#include "AutocompleteIndex.h"
int main() { AutocompleteIndex index; std::string word(256, 'x'); index.insert(word); assert(index.suggest(std::string(200, 'x')).front() == word); }
