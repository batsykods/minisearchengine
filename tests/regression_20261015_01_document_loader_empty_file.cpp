#include <cassert>
#include <fstream>
#include <string>
#include "DocumentLoader.h"
int main(){ const std::string p="loader_empty_fixture.txt"; { std::ofstream f(p); } DocumentLoader l; auto d=l.load(3,p); assert(d.getContent().empty()); std::remove(p.c_str()); }
