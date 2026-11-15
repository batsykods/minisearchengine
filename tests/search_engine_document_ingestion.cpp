#include "Document.h"
#include "SearchEngine.h"

#include <cassert>
#include <vector>

int main() {
    SearchEngine engine;
    const Document document(17, "memory", "C++ search-engine engine");
    engine.addDocument(document);

    assert(engine.getIndex().documentCount() == 1);
    assert(engine.getIndex().termFrequency("engine", 17) == 2);
    assert((engine.search("search") == std::vector<int>{17}));
    assert((engine.search("c") == std::vector<int>{17}));
    assert((engine.suggest("eng", 5) == std::vector<std::string>{"engine"}));

    SearchEngine textEngine;
    textEngine.addDocument(23, "Reusable raw text ingestion");
    assert((textEngine.search("reusable") == std::vector<int>{23}));
    assert((textEngine.search("ingestion") == std::vector<int>{23}));
    assert((textEngine.suggest("ing", 5) == std::vector<std::string>{"ingestion"}));
    assert(textEngine.suggest("unknown", 5).empty());

    textEngine.addDocument(24, "!!! ---");
    assert(textEngine.getIndex().documentCount() == 2);
    assert(textEngine.getIndex().documentLength(24) == 0);
    assert(textEngine.search("!!!").empty());
    return 0;
}
