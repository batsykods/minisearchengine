#include "SnippetBuilder.h"

#include <cassert>
#include <string>

int main() {
    const SnippetBuilder builder;
    const std::string content = "012345678901234567890123456789abcdefghijklmnopqrstuvwxyz";

    const auto noMatch = builder.build(content, {}, 10);
    assert(noMatch.size() == 10);
    assert(noMatch.substr(0, 7) == "0123456");
    assert(noMatch.substr(7) == "...");

    const auto earlyMatch = builder.build(content, {"012"}, 10);
    assert(earlyMatch.size() == 10);
    assert(earlyMatch.find("012") != std::string::npos);
    assert(earlyMatch.back() == '.');

    const auto middleMatch = builder.build(content, {"mnop"}, 16);
    assert(middleMatch.size() == 16);
    assert(middleMatch.find("...") == 0);
    assert(middleMatch.find("mnop") != std::string::npos);
    assert(middleMatch.rfind("...") == 13);

    const auto lateMatch = builder.build(content, {"xyz"}, 12);
    assert(lateMatch.size() == 12);
    assert(lateMatch.find("xyz") != std::string::npos);
    assert(lateMatch.find("...") == 0);
    return 0;
}
