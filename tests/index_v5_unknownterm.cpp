#include "InvertedIndex.h"
int main(){ InvertedIndex x; x.addDocument(1,{"alpha"}); return (x.documentFrequency("beta")==0)?0:1;}
