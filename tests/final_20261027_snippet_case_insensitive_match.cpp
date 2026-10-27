#include <cassert>
#include <string>
#include <vector>
#include "SnippetBuilder.h"

int main() {
    SnippetBuilder builder; auto result = builder.build("0123456789TARGETabcdefghij", {"target"}, 16); assert(result.find("TARGET") != std::string::npos);
    return 0;
}
