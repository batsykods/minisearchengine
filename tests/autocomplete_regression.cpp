#include <cassert>
#include <string>
#include <vector>

#include "AutocompleteIndex.h"

int main() {
    AutocompleteIndex index;
    assert(index.empty());
    assert(index.size() == 0);
    assert(index.suggest("a").empty());

    index.insert("");
    index.insert("app");
    index.insert("apple");
    index.insert("application");
    index.insert("apt");
    index.insert("bat");
    index.insert("app");

    assert(index.size() == 5);
    assert(!index.empty());
    assert((index.suggest("app") == std::vector<std::string>{"app", "apple", "application"}));
    assert((index.suggest("app", 2) == std::vector<std::string>{"app", "apple"}));
    assert((index.suggest("app", 1) == std::vector<std::string>{"app"}));
    assert(index.suggest("app", 0).empty());
    assert((index.suggest("ap") == std::vector<std::string>{"app", "apple", "application", "apt"}));
    assert((index.suggest("bat") == std::vector<std::string>{"bat"}));
    assert(index.suggest("cat").empty());
    assert(index.suggest("applepie").empty());

    index.insert("app");
    assert(index.size() == 5);
    assert((index.suggest("app") == std::vector<std::string>{"app", "apple", "application"}));
    return 0;
}
