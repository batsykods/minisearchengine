#include <cassert>
#include <string>
#include <vector>
#include "QueryTokenizer.h"

int main() {
    QueryTokenizer tokenizer;
    assert(tokenizer.tokenize("!!! @#$ %^&*").empty());
    return 0;
}
