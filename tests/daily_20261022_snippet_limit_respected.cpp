#include "SnippetBuilder.h"
#include <cassert>
int main(){ SnippetBuilder b; auto s=b.build("0123456789abcdefghijklmnopqrstuvwxyz",{"mnop"},12); assert(s.size()<=12); }