#include <cassert>
#include <string>
#include <vector>
#include "SnippetBuilder.h"

int main() {
    SnippetBuilder builder; const std::string content = "abcdefghij"; assert(builder.build(content, {"x"}, 10) == content);
    return 0;
}
