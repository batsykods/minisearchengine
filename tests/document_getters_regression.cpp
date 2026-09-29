#include <cassert>
#include "Document.h"
int main(){ Document d(42,"x.txt","hello"); assert(d.getId()==42); assert(d.getPath()=="x.txt"); assert(d.getContent()=="hello"); }