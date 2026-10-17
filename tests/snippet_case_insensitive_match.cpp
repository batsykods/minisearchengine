#include <cassert>
#include <string>
#include "SnippetBuilder.h"
int main() { SnippetBuilder b; auto s=b.build("AAAAA target phrase ZZZZZ", {"TARGET"}, 12); assert(s.find("target")!=std::string::npos || s.find("TARGET")!=std::string::npos); return 0; }
