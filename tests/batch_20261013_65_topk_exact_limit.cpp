#include <cassert>
#include "SearchResult.h"
#include <vector>
#include "TopK.h"
int main() {
    TopK t; assert(t.select({{1,2.0},{2,1.0}},2).size()==2);
    return 0;
}
