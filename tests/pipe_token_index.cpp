#include "Tokenizer.h"
#include "InvertedIndex.h"
#include <cassert>
int main(){Tokenizer t;InvertedIndex x;x.addDocument(1,t.tokenize("C++ Search Engine"));assert(x.contains("search"));assert(x.contains("engine"));}