#include <cassert>
#include <string>
#include "SnippetBuilder.h"
int main() { SnippetBuilder b; assert(b.build("Short text", {"text"}, 20)=="Short text"); return 0; }
