#include <cassert>
#include "QueryTokenizer.h"
int main(){
 QueryTokenizer t; auto v=t.tokenize("Hello, WORLD!"); assert(v.size()==2 && v[0]=="hello" && v[1]=="world");
 return 0;
}
