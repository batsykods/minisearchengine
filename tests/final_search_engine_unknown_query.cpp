#include <cassert>
#include <string>
#include <vector>
#include "SearchEngine.h"
#include "Tokenizer.h"

int main() {
    SearchEngine engine;
    Tokenizer tokenizer;
    engine.addDocument(1, tokenizer.tokenize("alpha beta")); assert(engine.search("unseen").empty());
    return 0;
}
