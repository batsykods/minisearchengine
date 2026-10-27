#include <cassert>
#include <string>
#include <vector>
#include "AutocompleteIndex.h"

int main() {
    AutocompleteIndex index; index.insert("application"); index.insert("app"); index.insert("apple"); auto results = index.suggest("app"); assert(results.size() == 3); assert(results[0] == "app");
    return 0;
}
