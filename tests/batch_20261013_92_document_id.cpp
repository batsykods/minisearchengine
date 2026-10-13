#include <cassert>
#include <string>
#include "Document.h"
int main() {
    Document d(42, "file.txt", "content"); assert(d.getId()==42);
    return 0;
}
