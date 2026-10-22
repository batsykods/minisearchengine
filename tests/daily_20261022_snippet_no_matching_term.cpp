#include "SnippetBuilder.h"
#include <cassert>
int main(){ SnippetBuilder b; auto s=b.build("abcdefghijklmnopqrstuvwxyz",{"missing"},10); assert(s.size()<=10 && !s.empty()); }