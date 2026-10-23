#include <cassert>
#include <string>
#include <vector>
#include "SearchEngine.h"
#include "Tokenizer.h"

int main() {
    SearchEngine engine;
    Tokenizer tokenizer;
    engine.addDocument(1, tokenizer.tokenize("alpha beta")); engine.addDocument(2, tokenizer.tokenize("alpha beta")); assert(engine.search("alpha") == engine.search("alpha"));
    return 0;
}
