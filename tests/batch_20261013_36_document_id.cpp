#include "Document.h"
#include <cassert>
#include <string>
#include <vector>

int main() {
    Document d(17,"docs/a.txt","alpha"); assert(d.getId()==17);
    return 0;
}
