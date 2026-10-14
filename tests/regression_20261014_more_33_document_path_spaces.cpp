#include <cassert>
#include <string>
#include <vector>
#include "Document.h"
int main(){ Document d(2,"folder/my file.txt","x"); assert(d.getPath()=="folder/my file.txt"); return 0; }
