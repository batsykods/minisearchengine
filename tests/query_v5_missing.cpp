#include "QueryProcessor.h"
int main(){ InvertedIndex x; x.addDocument(1,{"alpha"}); QueryProcessor q; return (q.search(x,"beta").empty())?0:1;}
