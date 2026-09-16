#include <cassert>
#include <filesystem>
#include "DocumentLoader.h"

int main() {
    DocumentLoader loader;
    const auto docs = loader.loadDirectory(std::filesystem::path("data/does_not_exist"));
    assert(docs.empty());
}
