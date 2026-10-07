#include "QueryProcessor.h"
int main(){return InvertedIndex x; x.addDocument(8,{"alpha","beta"}); x.addDocument(2,{"alpha","beta"}); QueryProcessor q; auto v=q.search(x,"alpha beta"); return v.size()==2&&v[0]==2&&v[1]==8;?0:1;}
