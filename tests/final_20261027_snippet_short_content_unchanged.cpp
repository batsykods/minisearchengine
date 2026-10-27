#include <cassert>
#include <string>
#include <vector>
#include "SnippetBuilder.h"

int main() {
    SnippetBuilder builder; const std::string content = "alpha beta"; assert(builder.build(content, {"alpha"}, 100) == content);
    return 0;
}
