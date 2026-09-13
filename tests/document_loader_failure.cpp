#include "DocumentLoader.h"
#include <cassert>
#include <stdexcept>

int main() {
    const DocumentLoader loader;
    bool threw = false;
    try {
        (void)loader.load(1, "data/documents/does-not-exist.txt");
    } catch (const std::runtime_error&) {
        threw = true;
    }
    assert(threw);
    return 0;
}
