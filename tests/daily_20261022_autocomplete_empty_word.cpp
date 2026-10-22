#include "AutocompleteIndex.h"
#include <cassert>
int main(){ AutocompleteIndex a; a.insert(""); assert(a.empty() && a.size()==0); }