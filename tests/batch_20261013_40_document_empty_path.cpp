#include "Document.h"
#include <cassert>
#include <string>
#include <vector>

int main() {
    Document d(1,"","text"); assert(d.getPath().empty());
    return 0;
}
