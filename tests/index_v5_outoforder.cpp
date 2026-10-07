#include "InvertedIndex.h"
int main(){return InvertedIndex x; x.addDocument(8,{"alpha"}); x.addDocument(2,{"alpha"}); x.addDocument(5,{"alpha"}); return x.search("alpha")[0]==2&&x.search("alpha")[2]==8;?0:1;}
