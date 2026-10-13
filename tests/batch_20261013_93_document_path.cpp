#include <cassert>
#include <string>
#include "Document.h"
int main() {
    Document d(1, "docs/a.txt", "x"); assert(d.getPath()=="docs/a.txt");
    return 0;
}
