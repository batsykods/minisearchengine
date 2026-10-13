#include <cassert>
#include <string>
#include "Document.h"
int main() {
    Document d(1, "a.txt", "full body"); assert(d.getContent()=="full body");
    return 0;
}
