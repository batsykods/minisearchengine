#ifndef DOCUMENT_LOADER_H
#define DOCUMENT_LOADER_H

#include <string>
#include "Document.h"

class DocumentLoader {
public:
    Document load(int id, const std::string& path) const;
};

#endif
