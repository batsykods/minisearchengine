#include <cassert>
#include <string>
#include <vector>
#include "SnippetBuilder.h"

int main() {
    SnippetBuilder builder; assert(builder.build("alpha beta", {"alpha"}, 0).empty());
    return 0;
}
