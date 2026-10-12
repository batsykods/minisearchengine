#include "Document.h"
#include <cassert>
#include <string>
#include <vector>

int main() {
    Document d(1,"empty.txt",""); assert(d.getContent().empty());
    return 0;
}
