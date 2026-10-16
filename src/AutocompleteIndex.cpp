#include "AutocompleteIndex.h"

void AutocompleteIndex::insert(const std::string& word) {
    if (word.empty()) return;
    Node* node = &root;
    for (char character : word) {
        auto& child = node->children[character];
        if (!child) child = std::make_unique<Node>();
        node = child.get();
    }
    if (!node->terminal) {
        node->terminal = true;
        ++wordCount;
    }
}

void AutocompleteIndex::collect(const Node& node, std::string& current, std::vector<std::string>& output, std::size_t limit) {
    if (output.size() >= limit) return;
    if (node.terminal) output.push_back(current);
    for (const auto& [character, child] : node.children) {
        if (output.size() >= limit) break;
        current.push_back(character);
        collect(*child, current, output, limit);
        current.pop_back();
    }
}

std::vector<std::string> AutocompleteIndex::suggest(const std::string& prefix, std::size_t limit) const {
    if (limit == 0) return {};
    const Node* node = &root;
    for (char character : prefix) {
        const auto found = node->children.find(character);
        if (found == node->children.end()) return {};
        node = found->second.get();
    }
    std::vector<std::string> output;
    output.reserve(limit < wordCount ? limit : wordCount);
    std::string current = prefix;
    collect(*node, current, output, limit);
    return output;
}

std::size_t AutocompleteIndex::size() const { return wordCount; }
bool AutocompleteIndex::empty() const { return wordCount == 0; }
