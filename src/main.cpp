#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

#include "DocumentLoader.h"
#include "SearchEngine.h"
#include "SnippetBuilder.h"
#include "Tokenizer.h"

int main(int argc, char* argv[]) {
    try {
        DocumentLoader loader;
        Tokenizer tokenizer;
        SearchEngine engine;
        SnippetBuilder snippets;
        std::vector<Document> documents;
        documents.push_back(loader.load(1, "data/documents/cpp.txt"));
        documents.push_back(loader.load(2, "data/documents/algorithms.txt"));
        documents.push_back(loader.load(3, "data/documents/search.txt"));

        for (const auto& document : documents) {
            engine.addDocument(document.getId(), tokenizer.tokenize(document.getContent()));
        }

        std::string query = "search";
        if (argc > 1) {
            query.clear();
            for (int argument = 1; argument < argc; ++argument) {
                if (!query.empty()) query += ' ';
                query += argv[argument];
            }
        }

        const auto results = engine.bm25Search(query);
        const auto queryTerms = tokenizer.tokenize(query);

        std::cout << "Indexed documents: " << engine.getIndex().documentCount() << '\n';
        std::cout << "Indexed terms: " << engine.getIndex().termCount() << '\n';
        std::cout << "Query: " << query << '\n';
        std::cout << "Results: " << results.size() << '\n';

        for (const auto& result : results) {
            for (const auto& document : documents) {
                if (document.getId() != result.documentId) continue;
                std::cout << std::fixed << std::setprecision(4)
                          << '[' << result.score << "] "
                          << document.getPath() << '\n';
                std::cout << "  " << snippets.build(document.getContent(), queryTerms, 140) << '\n';
                break;
            }
        }
    } catch (const std::exception& error) {
        std::cerr << "Error: " << error.what() << '\n';
        return 1;
    }

    return 0;
}
