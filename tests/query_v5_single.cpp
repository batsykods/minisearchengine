#include "QueryProcessor.h"
int main(){ InvertedIndex x; x.addDocument(1,{"alpha"}); QueryProcessor q; auto v=q.search(x,"alpha"); return (v.size()==1&&v[0]==1)?0:1;}
