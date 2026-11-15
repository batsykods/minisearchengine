#include "SnippetBuilder.h"
#include "TextNormalization.h"

#include <algorithm>

std::string SnippetBuilder::build(const std::string& content, const std::vector<std::string>& terms,
                                  std::size_t maxLength) const {
    if (content.empty() || maxLength == 0) return {};
    std::string loweredContent = content;
    std::transform(loweredContent.begin(), loweredContent.end(), loweredContent.begin(),
                   [](unsigned char c) { return text_normalization::toLower(c); });
    std::size_t match = std::string::npos;
    for (const auto& term : terms) {
        if (term.empty()) continue;
        std::string loweredTerm = term;
        std::transform(loweredTerm.begin(), loweredTerm.end(), loweredTerm.begin(),
                       [](unsigned char c) { return text_normalization::toLower(c); });
        const auto found = loweredContent.find(loweredTerm);
        if (found != std::string::npos) match = std::min(match, found);
    }
    if (content.size() <= maxLength) return content;
    if (maxLength <= 3) return content.substr(0, maxLength);
    if (maxLength <= 6) {
        std::size_t start = 0;
        if (match != std::string::npos && match > maxLength / 2) start = match - maxLength / 2;
        if (start + maxLength > content.size()) start = content.size() - maxLength;
        return content.substr(start, maxLength);
    }

    std::size_t start = 0;
    bool prefix = false;
    if (match != std::string::npos) {
        const std::size_t centeredOffset = (maxLength - 6) / 2;
        start = match > centeredOffset ? match - centeredOffset : 0;
        prefix = start > 0;
        if (prefix) {
            start = std::min(start, content.size() - (maxLength - 3));
        }
    }

    std::size_t contentLength = maxLength - (prefix ? 3 : 0);
    const bool suffix = start + contentLength < content.size();
    if (suffix) contentLength -= 3;

    std::string snippet;
    if (prefix) snippet += "...";
    snippet += content.substr(start, contentLength);
    if (suffix) snippet += "...";
    return snippet;
}
