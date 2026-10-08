#include <cassert>
#include "SearchEngine.h"
int main(){
    SearchEngine engine;
    engine.addDocument(1, {"search","engine"});
    engine.addDocument(2, {"engine","ranking"});
    auto results = engine.rankedSearch("search");
    assert(!results.empty());
    assert(results.front().documentId == 1);
    return 0;
}
