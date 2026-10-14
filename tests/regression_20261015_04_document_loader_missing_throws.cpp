#include <cassert>
#include <cstdio>
#include <stdexcept>
#include "DocumentLoader.h"
int main(){ DocumentLoader l; bool threw=false; try { l.load(1,"definitely_missing_search_fixture_14.txt"); } catch(const std::runtime_error&) { threw=true; } assert(threw); }
