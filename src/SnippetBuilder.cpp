#include "SnippetBuilder.h"

#include <algorithm>
#include <cctype>

std::string SnippetBuilder::build(const std::string& content, const std::vector<std::string>& terms,
                                  std::size_t maxLength) const {
    if (content.empty() || maxLength == 0) return {};
    std::string loweredContent = content;
    std::transform(loweredContent.begin(), loweredContent.end(), loweredContent.begin(),
                   [](unsigned char c) { return static_cast<char>(std::tolower(c)); });
    std::size_t match = std::string::npos;
    for (const auto& term : terms) {
        if (term.empty()) continue;
        std::string loweredTerm = term;
        std::transform(loweredTerm.begin(), loweredTerm.end(), loweredTerm.begin(),
                       [](unsigned char c) { return static_cast<char>(std::tolower(c)); });
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

    const std::size_t interior = maxLength - 6;
    std::size_t start = 0;
    if (match != std::string::npos && match > interior / 2) start = match - interior / 2;
    if (start + interior > content.size()) start = content.size() - interior;
    const bool prefix = start > 0;
    const bool suffix = start + interior < content.size();
    std::string snippet;
    if (prefix) snippet += "...";
    snippet += content.substr(start, interior);
    if (suffix) snippet += "...";
    if (snippet.size() > maxLength) snippet.resize(maxLength);
    return snippet;
}
