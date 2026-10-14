#include <cassert>
#include "Document.h"
int main(){
 Document d(5,"docs/a.txt","body"); assert(d.getId()==5 && d.getPath()=="docs/a.txt" && d.getContent()=="body");
 return 0;
}
