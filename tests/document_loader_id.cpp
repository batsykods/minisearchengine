#include <cassert>
#include <fstream>
#include <cstdio>
#include "DocumentLoader.h"
int main(){ const char* p="loader_id.tmp"; {std::ofstream f(p); f<<"x";} auto d=DocumentLoader{}.load(77,p); assert(d.getId()==77); std::remove(p); }