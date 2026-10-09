#include "StopWords.h"
#include <cassert>
int main(){ StopWords s; assert(s.contains("the") && s.contains("and") && s.contains("with")); }