#include <cassert>
#include <string>
#include <vector>
#include "SnippetBuilder.h"

int main() {
    SnippetBuilder builder; assert(builder.build("", {"alpha"}).empty());
    return 0;
}
