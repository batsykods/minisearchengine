#include <cassert>
#include <string>
#include <vector>
#include "Document.h"
int main(){ Document d(0,"",""); assert(d.getId()==0 && d.getPath().empty() && d.getContent().empty()); return 0; }
