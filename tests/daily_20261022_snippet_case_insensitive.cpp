#include "SnippetBuilder.h"
#include <cassert>
int main(){ SnippetBuilder b; auto s=b.build("AAAA target ZZZZ",{"TARGET"},8); assert(!s.empty()); }