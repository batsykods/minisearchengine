#ifndef DOCUMENT_H
#define DOCUMENT_H

#include <string>

class Document {
private:
    int id;
    std::string path;
    std::string content;

public:
    Document(int id, const std::string& path, const std::string& content);

    int getId() const;
    const std::string& getPath() const;
    const std::string& getContent() const;
};

#endif