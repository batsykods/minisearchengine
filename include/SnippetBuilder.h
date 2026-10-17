#ifndef SNIPPET_BUILDER_H
#define SNIPPET_BUILDER_H

#include <cstddef>
#include <string>
#include <vector>

class SnippetBuilder {
public:
    std::string build(const std::string& content, const std::vector<std::string>& terms,
                      std::size_t maxLength = 160) const;
};

#endif
