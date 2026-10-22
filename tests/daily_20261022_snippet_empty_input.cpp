#include "SnippetBuilder.h"
#include <cassert>
int main(){ SnippetBuilder b; assert(b.build("",{"x"}).empty()); }