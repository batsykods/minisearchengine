#include "InvertedIndex.h"
#include <cassert>
#include <vector>
#include <string>
int main(){InvertedIndex x;std::vector<std::string> t(1000,"a");x.addDocument(1,t);assert(x.termFrequency("a",1)==1000);}