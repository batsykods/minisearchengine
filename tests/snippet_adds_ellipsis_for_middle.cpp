#include <cassert>
#include <string>
#include "SnippetBuilder.h"
int main() { SnippetBuilder b; auto s=b.build("abcdefghijklmnopqrstuvwxyz0123456789", {"0123"}, 16); assert(s.size()<=16 && s.find("...")!=std::string::npos); return 0; }
