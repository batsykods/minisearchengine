#include "InvertedIndex.h"
int main(){ InvertedIndex x; x.addDocument(1,{"alpha"}); return (x.termFrequency("beta",1)==0)?0:1;}
