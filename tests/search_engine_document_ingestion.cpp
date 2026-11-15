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
    return 0;
}
