#include <cassert>
#include <string>
#include "SnippetBuilder.h"

int main() {
    SnippetBuilder builder;
    const std::string content = "prefix words and a MATCH in the middle followed by more words";
    const auto snippet = builder.build(content, {"match"}, 4);
    assert(snippet.size() == 4);
    return 0;
}
