#include <cassert>
#include <vector>
#include "AutocompleteIndex.h"
int main() { AutocompleteIndex index; index.insert("cat"); index.insert("car"); index.insert("cap"); assert((index.suggest("ca") == std::vector<std::string>{"cap", "car", "cat"})); }
