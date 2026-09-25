#include "QueryProcessor.h"
#include <cassert>
int main(){InvertedIndex x;x.addDocument(1,{"alpha","beta"});QueryProcessor q;assert(q.search(x,"alpha beta")==q.search(x,"beta alpha"));}