#include "SnippetBuilder.h"

#include <cassert>
#include <string>

int main() {
    const SnippetBuilder builder;
    const std::string content = "FIRST match appears before the later matching word near the end";
    const auto firstListed = builder.build(content, {"later", "FIRST"}, 24);
    const auto reverseListed = builder.build(content, {"FIRST", "later"}, 24);

    assert(firstListed == reverseListed);
    assert(firstListed.size() <= 24);
    assert(firstListed.find("FIRST") != std::string::npos);
    assert(firstListed.find("later") == std::string::npos);
    return 0;
}
