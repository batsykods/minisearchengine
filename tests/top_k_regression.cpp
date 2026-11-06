#include <cassert>
#include <vector>
#include "TopK.h"

int main() {
    TopK selector;
    const std::vector<SearchResult> input{{5, 2.0}, {3, 4.0}, {1, 4.0}, {2, 1.0}};

    const auto all = selector.select(input, 10);
    assert(all.size() == 4);
    assert(all[0].documentId == 1);
    assert(all[1].documentId == 3);
    assert(all[2].documentId == 5);
    assert(all[3].documentId == 2);

    const auto topTwo = selector.select(input, 2);
    assert(topTwo.size() == 2);
    assert(topTwo[0].documentId == 1);
    assert(topTwo[1].documentId == 3);

    assert(selector.select(input, 1).front().documentId == 1);
    assert(selector.select(input, 0).empty());
    assert(selector.select({}, 5).empty());
    return 0;
}
