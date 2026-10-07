#include "InvertedIndex.h"
int main(){return InvertedIndex a,b; a.addDocument(1,{"alpha"}); b.addDocument(2,{"beta"}); return a.search("beta").empty()&&b.search("alpha").empty();?0:1;}
