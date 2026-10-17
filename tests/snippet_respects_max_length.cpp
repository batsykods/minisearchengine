#include <cassert>
#include <string>
#include "SnippetBuilder.h"
int main() { SnippetBuilder b; auto s=b.build("012345678901234567890123456789", {"20"}, 12); assert(s.size()<=12); return 0; }
