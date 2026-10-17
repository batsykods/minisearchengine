#include "SnippetBuilder.h"

#include <algorithm>
#include <cctype>
#include <limits>

std::string SnippetBuilder::build(const std::string& content, const std::vector<std::string>& terms,
                                  std::size_t maxLength) const {
    if (content.empty() || maxLength == 0) return {};
    std::size_t match = std::string::npos;
    for (const auto& term : terms) {
        if (term.empty()) continue;
        std::string loweredTerm = term;
        std::transform(loweredTerm.begin(), loweredTerm.end(), loweredTerm.begin(),
                       [](unsigned char c) { return static_cast<char>(std::tolower(c)); });
        std::string loweredContent = content;
        std::transform(loweredContent.begin(), loweredContent.end(), loweredContent.begin(),
                       [](unsigned char c) { return static_cast<char>(std::tolower(c)); });
        const auto found = loweredContent.find(loweredTerm);
        if (found != std::string::npos) match = std::min(match, found);
    }
    if (content.size() <= maxLength) return content;
    std::size_t start = 0;
    if (match != std::string::npos && match > maxLength / 3) start = match - maxLength / 3;
    if (start + maxLength > content.size()) start = content.size() - maxLength;
    std::string snippet = content.substr(start, maxLength);
    if (start > 0) snippet = "..." + snippet;
    if (start + maxLength < content.size()) snippet += "...";
    return snippet;
}
