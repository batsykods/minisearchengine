#include "InvertedIndex.h"
int main(){ InvertedIndex x; x.addDocument(1,{"alpha","beta"}); return (x.termCount()==2)?0:1;}
