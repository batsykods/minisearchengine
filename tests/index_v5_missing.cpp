#include "InvertedIndex.h"
int main(){ InvertedIndex x; return (!x.contains("missing")&&x.search("missing").empty())?0:1;}
