#include <cassert>
#include <string>
#include <vector>
#include "SnippetBuilder.h"

int main() {
    SnippetBuilder builder; assert(builder.build("abcdefghijklmnopqrstuvwxyz", {"q"}, 3) == "abc");
    return 0;
}
