#include <cassert>
#include "QueryTokenizer.h"
int main(){QueryTokenizer q; auto x=q.tokenize("TF-IDF"); assert(x.size()==1); assert(x[0]=="tfidf");return 0;}
