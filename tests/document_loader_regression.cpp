#include <cassert>
#include <cstdio>
#include <fstream>
#include "DocumentLoader.h"
int main(){ const char* p="document_loader_regression.tmp"; {std::ofstream f(p); f<<"hello\nworld";} Document d=DocumentLoader{}.load(9,p); assert(d.getId()==9&&d.getContent()=="hello\nworld"); std::remove(p); }