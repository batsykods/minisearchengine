#include "AutocompleteIndex.h"
#include <cassert>
int main(){ AutocompleteIndex a; a.insert("search"); a.insert("search"); assert(a.size()==1); }