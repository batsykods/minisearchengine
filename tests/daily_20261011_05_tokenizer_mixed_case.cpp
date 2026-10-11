#include "Tokenizer.h"
#include <cassert>
#include <vector>
#include <string>

int main() {
    Tokenizer t; assert((t.tokenize("SeArCh EnGiNe") == std::vector<std::string>{"search","engine"}));
    return 0;
}
