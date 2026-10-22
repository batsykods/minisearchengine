#include "SnippetBuilder.h"
#include <cassert>
int main(){ SnippetBuilder b; const std::string s="short text"; assert(b.build(s,{"text"},30)==s); }