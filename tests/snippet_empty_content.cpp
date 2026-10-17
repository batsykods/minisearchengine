#include <cassert>
#include <string>
#include "SnippetBuilder.h"
int main() { SnippetBuilder b; assert(b.build("", {"term"}).empty()); return 0; }
