#include <cassert>
#include <fstream>
#include <string>
#include <cstdio>
#include "DocumentLoader.h"
int main(){ const std::string p="loader_lines_fixture.txt"; { std::ofstream f(p); f<<"alpha\nbeta"; } DocumentLoader l; auto d=l.load(2,p); assert(d.getContent()=="alpha\nbeta"); std::remove(p.c_str()); }
