#include <cassert>
#include <vector>
#include "AutocompleteIndex.h"
int main() { AutocompleteIndex index; index.insert("inter"); index.insert("internet"); index.insert("internal"); assert((index.suggest("inter") == std::vector<std::string>{"inter", "internal", "internet"})); }
