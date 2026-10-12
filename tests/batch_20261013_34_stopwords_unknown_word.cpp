#include "StopWords.h"
#include <cassert>
#include <string>
#include <vector>

int main() {
    StopWords s; assert(!s.contains("searchengine"));
    return 0;
}
