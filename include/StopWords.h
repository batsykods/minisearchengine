#ifndef STOP_WORDS_H
#define STOP_WORDS_H
#include <string>
#include <unordered_set>
class StopWords {
private:
    std::unordered_set<std::string> words;
public:
    StopWords();
    bool contains(const std::string& word) const;
};
#endif
