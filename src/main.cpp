#include <iostream>
#include "Document.h"

int main() {
    Document document(
        1,
        "data/documents/cpp.txt",
        "C++ is a powerful programming language."
    );

    std::cout << "ID: " << document.getId() << '\n';
    std::cout << "Path: " << document.getPath() << '\n';
    std::cout << "Content: " << document.getContent() << '\n';

    return 0;
}
