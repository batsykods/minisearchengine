#include "Document.h"

#include <cassert>
#include <string>

int main() {
    const Document document(42, "data/documents/sample.txt", "search engine content");

    assert(document.getId() == 42);
    assert(document.getPath() == "data/documents/sample.txt");
    assert(document.getContent() == "search engine content");

    return 0;
}
