#include <cassert>
#include <string>
#include <vector>
#include "SnippetBuilder.h"

int main() {
    SnippetBuilder builder; auto result = builder.build("abcdefghijklmnopqrstuvwxyz", {"q"}, 5); assert(result.size() <= 5);
    return 0;
}
