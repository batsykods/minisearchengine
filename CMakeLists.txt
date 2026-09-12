cmake_minimum_required(VERSION 3.15)

project(minisearchengine LANGUAGES CXX)

enable_testing()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(search_engine
    src/main.cpp
    src/Document.cpp
    src/DocumentLoader.cpp
    src/Tokenizer.cpp
    src/InvertedIndex.cpp
)

target_include_directories(search_engine PRIVATE include)

target_compile_options(search_engine PRIVATE
    $<$<CXX_COMPILER_ID:GNU,Clang>:-Wall;-Wextra;-Wpedantic>
    $<$<CXX_COMPILER_ID:MSVC>:/W4>
)

add_executable(tokenizer_smoke tests/tokenizer_smoke.cpp src/Tokenizer.cpp)
target_include_directories(tokenizer_smoke PRIVATE include)
add_executable(tokenizer_edge_cases tests/tokenizer_edge_cases.cpp src/Tokenizer.cpp)
target_include_directories(tokenizer_edge_cases PRIVATE include)
add_executable(tokenizer_numbers tests/tokenizer_numbers.cpp src/Tokenizer.cpp)
target_include_directories(tokenizer_numbers PRIVATE include)

add_executable(inverted_index_smoke tests/inverted_index_smoke.cpp src/InvertedIndex.cpp)
target_include_directories(inverted_index_smoke PRIVATE include)
add_executable(inverted_index_duplicate_terms tests/inverted_index_duplicate_terms.cpp src/InvertedIndex.cpp)
target_include_directories(inverted_index_duplicate_terms PRIVATE include)
add_executable(inverted_index_empty_tokens tests/inverted_index_empty_tokens.cpp src/InvertedIndex.cpp)
target_include_directories(inverted_index_empty_tokens PRIVATE include)

add_executable(document_smoke tests/document_smoke.cpp src/Document.cpp)
target_include_directories(document_smoke PRIVATE include)

add_executable(search_pipeline_smoke
    tests/search_pipeline_smoke.cpp
    src/Document.cpp
    src/DocumentLoader.cpp
    src/Tokenizer.cpp
    src/InvertedIndex.cpp
)
target_include_directories(search_pipeline_smoke PRIVATE include)

target_compile_options(search_pipeline_smoke PRIVATE
    $<$<CXX_COMPILER_ID:GNU,Clang>:-Wall;-Wextra;-Wpedantic>
    $<$<CXX_COMPILER_ID:MSVC>:/W4>
)

add_test(NAME tokenizer_smoke COMMAND tokenizer_smoke)
add_test(NAME tokenizer_edge_cases COMMAND tokenizer_edge_cases)
add_test(NAME tokenizer_numbers COMMAND tokenizer_numbers)
add_test(NAME inverted_index_smoke COMMAND inverted_index_smoke)
add_test(NAME inverted_index_duplicate_terms COMMAND inverted_index_duplicate_terms)
add_test(NAME inverted_index_empty_tokens COMMAND inverted_index_empty_tokens)
add_test(NAME document_smoke COMMAND document_smoke)
add_test(NAME search_pipeline_smoke COMMAND search_pipeline_smoke)
