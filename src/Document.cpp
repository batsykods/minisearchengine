#include "Document.h"

Document::Document(int id, const std::string& path, const std::string& content)
    : id(id), path(path), content(content) {
}

int Document::getId() const {
    return id;
}

const std::string& Document::getPath() const {
    return path;
}

const std::string& Document::getContent() const {
    return content;
}
