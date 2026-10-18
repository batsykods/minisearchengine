#include <cassert>
#include <string>
#include "SnippetBuilder.h"

int main() {
    SnippetBuilder builder;
    const std::string content = "prefix words and a MATCH in the middle followed by more words";
    const auto snippet = builder.build(content, {"match"}, 4);
    assert(snippet.size() == 4);
    assert(builder.build(content, {"prefix"}, 5).size() == 5);
    assert(builder.build(content, {"followed"}, 6).size() == 6);
    assert(builder.build(content, {"missing"}, 4).size() == 4);
    assert(builder.build(content, {}, 5).size() == 5);
    assert(builder.build(content, {""}, 6).size() == 6);
    assert(builder.build(content, {"MATCH"}, 4).size() == 4);
    return 0;
}
