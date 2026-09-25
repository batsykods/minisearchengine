#include "QueryProcessor.h"
#include <cassert>
int main(){InvertedIndex x;x.addDocument(1,{"alpha"});QueryProcessor q;assert(q.search(x,"missing").empty());}