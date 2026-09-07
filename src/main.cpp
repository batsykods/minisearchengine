#include <iostream>
#include "DocumentLoader.h"

int main() {
    try {
        DocumentLoader loader;
        Document document = loader.load(1, "data/documents/cpp.txt");

        std::cout << "ID: " << document.getId() << '\n';
        std::cout << "Path: " << document.getPath() << '\n';
        std::cout << "Content: " << document.getContent() << '\n';
    } catch (const std::exception& error) {
        std::cerr << "Error: " << error.what() << '\n';
        return 1;
    }

    return 0;
}
