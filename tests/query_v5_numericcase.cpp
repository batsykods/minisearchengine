#include "QueryProcessor.h"
int main(){ InvertedIndex x; x.addDocument(1,{"cse2026"}); QueryProcessor q; return (q.search(x,"CSE2026").size()==1)?0:1;}
