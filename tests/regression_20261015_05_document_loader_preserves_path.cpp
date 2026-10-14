#include <cassert>
#include <fstream>
#include <string>
#include <cstdio>
#include "DocumentLoader.h"
int main(){ const std::string p="loader_path_fixture.txt"; { std::ofstream f(p); f<<"x"; } DocumentLoader l; auto d=l.load(8,p); assert(d.getPath()==p); std::remove(p.c_str()); }
