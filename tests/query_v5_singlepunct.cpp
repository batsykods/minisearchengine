#include "QueryProcessor.h"
int main(){ InvertedIndex x; x.addDocument(1,{"alpha"}); QueryProcessor q; return (q.search(x,"@alpha@").size()==1)?0:1;}
