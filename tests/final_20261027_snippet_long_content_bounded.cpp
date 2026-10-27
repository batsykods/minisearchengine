#include <cassert>
#include <string>
#include <vector>
#include "SnippetBuilder.h"

int main() {
    SnippetBuilder builder; auto result = builder.build(std::string(500, 'a'), {"z"}, 32); assert(result.size() <= 32);
    return 0;
}
