#include <iostream>
#include <string>
#include "DocumentLoader.h"
#include "InvertedIndex.h"
#include "Tokenizer.h"

int main(int argc, char* argv[]) {
    try {
        DocumentLoader loader;
        Tokenizer tokenizer;
        InvertedIndex index;

        Document cpp = loader.load(1, "data/documents/cpp.txt");
        Document algorithms = loader.load(2, "data/documents/algorithms.txt");
        Document search = loader.load(3, "data/documents/search.txt");

        index.addDocument(cpp.getId(), tokenizer.tokenize(cpp.getContent()));
        index.addDocument(algorithms.getId(), tokenizer.tokenize(algorithms.getContent()));
        index.addDocument(search.getId(), tokenizer.tokenize(search.getContent()));

        const std::string query = argc > 1 ? argv[1] : "search";
        const auto& results = index.search(query);

        std::cout << "Query: " << query << '\n';
        std::cout << "Matching document IDs:\n";
        for (int documentId : results) {
            std::cout << "  " << documentId << '\n';
        }
    } catch (const std::exception& error) {
        std::cerr << "Error: " << error.what() << '\n';
        return 1;
    }

    return 0;
}
