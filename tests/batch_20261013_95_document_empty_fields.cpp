#include <cassert>
#include <string>
#include "Document.h"
int main() {
    Document d(0, "", ""); assert(d.getPath().empty() && d.getContent().empty());
    return 0;
}
