#include "DocumentLoader.h"
#include <fstream>
#include <sstream>
#include <stdexcept>

Document DocumentLoader::load(int id, const std::string& path) const {
    std::ifstream file(path);

    if (!file.is_open()) {
        throw std::runtime_error("Unable to open document: " + path);
    }

    std::stringstream buffer;
    buffer << file.rdbuf();

    return Document(id, path, buffer.str());
}
