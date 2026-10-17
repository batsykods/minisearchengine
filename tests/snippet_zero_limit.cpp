#include <cassert>
#include <string>
#include "SnippetBuilder.h"
int main() { SnippetBuilder b; assert(b.build("some content", {"some"}, 0).empty()); return 0; }
