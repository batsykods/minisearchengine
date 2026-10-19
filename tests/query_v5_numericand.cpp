#include "QueryProcessor.h"
int main(){ InvertedIndex x; x.addDocument(1,{"alpha","2026"}); QueryProcessor q; return (q.search(x,"alpha 2026").size()==1)?0:1;}
