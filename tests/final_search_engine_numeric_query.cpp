#include <cassert>
#include <string>
#include <vector>
#include "SearchEngine.h"
#include "Tokenizer.h"

int main() {
    SearchEngine engine;
    Tokenizer tokenizer;
    engine.addDocument(1, tokenizer.tokenize("version 2026")); assert(engine.search("2026").size() == 1);
    return 0;
}
