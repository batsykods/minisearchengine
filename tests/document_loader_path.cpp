#include <cassert>
#include <fstream>
#include <cstdio>
#include "DocumentLoader.h"
int main(){ const char* p="loader_path.tmp"; {std::ofstream f(p); f<<"x";} auto d=DocumentLoader{}.load(1,p); assert(d.getPath()==p); std::remove(p); }