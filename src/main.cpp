#include <iostream>
#include <string>
#include <vector>

#include "DocumentLoader.h"
#include "InvertedIndex.h"
#include "QueryProcessor.h"
#include "Tokenizer.h"

int main(int argc, char* argv[]) {
    try {
        DocumentLoader loader;
        Tokenizer tokenizer;
        InvertedIndex index;
        QueryProcessor queryProcessor;

        Document cpp = loader.load(1, "data/documents/cpp.txt");
        Document algorithms = loader.load(2, "data/documents/algorithms.txt");
        Document search = loader.load(3, "data/documents/search.txt");

        index.addDocument(cpp.getId(), tokenizer.tokenize(cpp.getContent()));
        index.addDocument(algorithms.getId(), tokenizer.tokenize(algorithms.getContent()));
        index.addDocument(search.getId(), tokenizer.tokenize(search.getContent()));

        std::string query = "search";
        if (argc > 1) {
            query.clear();
            for (int argument = 1; argument < argc; ++argument) {
                if (!query.empty()) {
                    query += ' ';
                }
                query += argv[argument];
            }
        }
        const auto results = queryProcessor.search(index, query);

        std::cout << "Indexed terms: " << index.termCount() << '\n';
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
