#include "PhraseMatcher.h"
#include <algorithm>
bool PhraseMatcher::matches(const std::vector<std::string>& tokens, const std::vector<std::string>& phrase) const {
    if (phrase.empty() || phrase.size() > tokens.size()) return false;
    return std::search(tokens.begin(), tokens.end(), phrase.begin(), phrase.end()) != tokens.end();
}
