#ifndef AUTOCOMPLETE_INDEX_H
#define AUTOCOMPLETE_INDEX_H

#include <cstddef>
#include <map>
#include <memory>
#include <string>
#include <vector>

class AutocompleteIndex {
private:
    struct Node {
        bool terminal = false;
        std::map<char, std::unique_ptr<Node>> children;
    };

    Node root;
    std::size_t wordCount = 0;
    static void collect(const Node& node, std::string& current, std::vector<std::string>& output, std::size_t limit);

public:
    void insert(const std::string& word);
    std::vector<std::string> suggest(const std::string& prefix, std::size_t limit = 10) const;
    std::size_t size() const;
    bool empty() const;
};

#endif
