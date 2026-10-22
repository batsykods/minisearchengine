#include "SnippetBuilder.h"
#include <cassert>
int main(){ SnippetBuilder b; assert(b.build("abcdef",{"d"},1).size()==1); assert(b.build("abcdef",{"d"},3).size()==3); }