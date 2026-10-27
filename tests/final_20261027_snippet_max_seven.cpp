#include <cassert>
#include <string>
#include <vector>
#include "SnippetBuilder.h"

int main() {
    SnippetBuilder builder; auto result = builder.build("abcdefghijklmnopqrstuvwxyz", {"z"}, 7); assert(result.size() <= 7);
    return 0;
}
