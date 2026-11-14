#include "DocumentLoader.h"
#include "InvertedIndex.h"
#include "Tokenizer.h"

#include <cassert>

int main() {
    const DocumentLoader loader;
    const Tokenizer tokenizer;
    InvertedIndex index;

    const Document document = loader.load(99, "../data/documents/cpp.txt");
    index.addDocument(document.getId(), tokenizer.tokenize(document.getContent()));

    assert(document.getId() == 99);
    assert(!document.getContent().empty());
    assert(index.termCount() > 0);
    assert(!index.search("c").empty());
    assert(index.search("c").front() == 99);

    return 0;
}
