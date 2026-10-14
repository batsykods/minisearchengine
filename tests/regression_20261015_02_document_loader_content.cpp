#include <cassert>
#include <fstream>
#include <string>
#include <cstdio>
#include "DocumentLoader.h"
int main(){ const std::string p="loader_content_fixture.txt"; { std::ofstream f(p); f<<"alpha beta"; } DocumentLoader l; auto d=l.load(7,p); assert(d.getId()==7 && d.getContent()=="alpha beta"); std::remove(p.c_str()); }
