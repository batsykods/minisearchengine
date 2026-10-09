#include "IndexStats.h"
IndexStats collectIndexStats(const InvertedIndex& index) {
    return {index.documentCount(), index.termCount()};
}
