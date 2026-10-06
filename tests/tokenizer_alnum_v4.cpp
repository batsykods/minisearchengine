#include "Tokenizer.h"
#include <cassert>
int main(){Tokenizer t;auto r=t.tokenize("HTTP2 API7");assert(r.size()==2&&r[0]=="http2"&&r[1]=="api7");}