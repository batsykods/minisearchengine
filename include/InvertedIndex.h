#ifndef INVERTED_INDEX_H
#define INVERTED_INDEX_H

#include <cstddef>
#include <string>
#include <unordered_map>
#include <vector>

class InvertedIndex {
private:
    std::unordered_map<std::string, std::vector<int>> index;

public:
    void addDocument(int documentId, const std::vector<std::string>& tokens);
    const std::vector<int>& search(const std::string& term) const;
    bool contains(const std::string& term) const;
    std::size_t termCount() const;
};

#endif
