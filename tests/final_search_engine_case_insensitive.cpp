#include <cassert>
#include <string>
#include <vector>
#include "SearchEngine.h"
#include "Tokenizer.h"

int main() {
    SearchEngine engine;
    Tokenizer tokenizer;
    engine.addDocument(7, tokenizer.tokenize("Search ENGINE")); auto ids = engine.search("search"); assert(ids.size() == 1 && ids[0] == 7);
    return 0;
}
