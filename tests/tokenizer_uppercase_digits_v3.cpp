#include "Tokenizer.h"
#include <cassert>
#include <vector>
#include <string>
int main() { Tokenizer t; assert((t.tokenize("HTTP2 API7")) == std::vector<std::string>{"http2","api7"}); }