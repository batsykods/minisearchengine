#include <cassert>
#include <string>
#include <vector>
#include "SnippetBuilder.h"

int main() {
    SnippetBuilder builder; const std::string content = "abcdefghijklmnopqrstuvwxyz TARGET"; auto result = builder.build(content, {"TARGET"}, 18); assert(result.find("TARGET") != std::string::npos); assert(result.size() <= 18);
    return 0;
}
