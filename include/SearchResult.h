#ifndef SEARCH_RESULT_H
#define SEARCH_RESULT_H
struct SearchResult {
    int documentId;
    double score;
    bool operator<(const SearchResult& other) const {
        if (score != other.score) return score > other.score;
        return documentId < other.documentId;
    }
};
#endif
