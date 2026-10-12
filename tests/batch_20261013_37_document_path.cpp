#include "Document.h"
#include <cassert>
#include <string>
#include <vector>

int main() {
    Document d(1,"docs/a.txt","alpha"); assert(d.getPath()=="docs/a.txt");
    return 0;
}
