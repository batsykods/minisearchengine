#include "InvertedIndex.h"
int main(){ InvertedIndex x; x.addDocument(1,{}); return (x.termCount()==0)?0:1;}
