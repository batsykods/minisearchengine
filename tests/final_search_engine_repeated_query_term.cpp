#include <cassert>
#include <string>
#include <vector>
#include "SearchEngine.h"
#include "Tokenizer.h"

int main() {
    SearchEngine engine;
    Tokenizer tokenizer;
    engine.addDocument(1, tokenizer.tokenize("alpha")); auto ids = engine.search("alpha alpha"); assert(ids.size() == 1 && ids[0] == 1);
    return 0;
}
