#include <cassert>
#include <string>
#include <vector>
#include "SnippetBuilder.h"

int main() {
    SnippetBuilder builder; auto result = builder.build("abcdefghijklmnopqrstuvwxyz", {}, 10); assert(result.size() <= 10); assert(result.find("...") != std::string::npos);
    return 0;
}
