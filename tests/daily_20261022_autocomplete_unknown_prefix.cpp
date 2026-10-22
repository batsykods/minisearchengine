#include "AutocompleteIndex.h"
#include <cassert>
int main(){ AutocompleteIndex a; a.insert("search"); assert(a.suggest("xyz").empty()); }