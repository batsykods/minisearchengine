#include "SearchEngine.h"
#include <cassert>
int main(){ SearchEngine e; e.addDocument(1,{"alpha","beta"}); const auto& i=e.getIndex(); assert(i.contains("alpha") && i.contains("beta")); }