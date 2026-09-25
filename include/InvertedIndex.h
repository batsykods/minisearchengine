#ifndef INVERTED_INDEX_H
#define INVERTED_INDEX_H

#include <cstddef>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

class InvertedIndex {
private:
    std::unordered_map<std::string, std::vector<int>> index;
    std::unordered_map<std::string, std::unordered_map<int, std::size_t>> frequencies;
    std::unordered_set<int> documentIds;

public:
    void addDocument(int documentId, const std::vector<std::string>& tokens);
    const std::vector<int>& search(const std::string& term) const;
    bool contains(const std::string& term) const;
    std::size_t termCount() const;
    std::size_t documentCount() const;
    std::size_t documentFrequency(const std::string& term) const;
    std::size_t termFrequency(const std::string& term, int documentId) const;
};

#endif
