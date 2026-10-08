#include "StopWords.h"
StopWords::StopWords()
    : words{"a","an","and","are","as","at","be","by","for","from","in","is","it","of","on","or","that","the","this","to","was","were","with"} {}
bool StopWords::contains(const std::string& word) const {
    return words.find(word) != words.end();
}
