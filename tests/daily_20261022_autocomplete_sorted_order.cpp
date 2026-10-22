#include "AutocompleteIndex.h"
#include <cassert>
int main(){ AutocompleteIndex a; a.insert("stack"); a.insert("search"); a.insert("syntax"); auto v=a.suggest("s"); assert(v.size()==3 && v[0]=="search" && v[1]=="stack" && v[2]=="syntax"); }