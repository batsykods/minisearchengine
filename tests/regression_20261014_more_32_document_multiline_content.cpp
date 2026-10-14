#include <cassert>
#include <string>
#include <vector>
#include "Document.h"
int main(){ Document d(2,"x","a\nb"); assert(d.getContent()=="a\nb"); return 0; }
