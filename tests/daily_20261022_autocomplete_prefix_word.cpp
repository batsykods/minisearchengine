#include "AutocompleteIndex.h"
#include <cassert>
int main(){ AutocompleteIndex a; a.insert("search"); a.insert("searcher"); auto v=a.suggest("search"); assert(v.size()==2 && v[0]=="search" && v[1]=="searcher"); }