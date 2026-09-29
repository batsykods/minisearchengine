#include <cassert>
#include <stdexcept>
#include "DocumentLoader.h"
int main(){ bool failed=false; try{ DocumentLoader{}.load(1,"__missing_search_engine_file__.txt"); }catch(const std::runtime_error&){failed=true;} assert(failed); }