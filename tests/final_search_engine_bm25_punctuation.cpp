#include <cassert>
#include <string>
#include <vector>
#include "SearchEngine.h"
#include "Tokenizer.h"

int main() {
    SearchEngine engine;
    Tokenizer tokenizer;
    engine.addDocument(1, tokenizer.tokenize("foo bar")); auto results = engine.bm25Search("foo-bar"); assert(results.size() == 2);
    return 0;
}
