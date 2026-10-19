#include "InvertedIndex.h"
int main(){ InvertedIndex x; x.addDocument(1,{"alpha"}); x.addDocument(2,{}); return (x.documentCount()==2)?0:1;}
