#include "Document.h"
#include <cassert>
#include <string>
#include <vector>

int main() {
    Document d(1,"docs/a.txt","alpha beta"); assert(d.getContent()=="alpha beta");
    return 0;
}
