#include "AutocompleteIndex.h"
#include <cassert>
int main(){ AutocompleteIndex a; a.insert("Search"); assert(a.suggest("s").empty()); assert(a.suggest("S").size()==1); }