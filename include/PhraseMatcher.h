#ifndef PHRASE_MATCHER_H
#define PHRASE_MATCHER_H
#include <string>
#include <vector>
class PhraseMatcher {
public:
    bool matches(const std::vector<std::string>& tokens, const std::vector<std::string>& phrase) const;
};
#endif
