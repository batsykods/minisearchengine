#include "AutocompleteIndex.h"
#include <cassert>
int main(){ AutocompleteIndex a; a.insert("alpha"); a.insert("alpine"); a.insert("also"); assert(a.suggest("al",2).size()==2); }