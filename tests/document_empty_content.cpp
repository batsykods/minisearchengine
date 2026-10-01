#include <cassert>
#include "Document.h"
int main(){ Document d(1,"empty.txt",""); assert(d.getContent().empty()); }