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

add_executable(tokenizer_smoke
    tests/tokenizer_smoke.cpp
    src/Tokenizer.cpp
)

target_include_directories(tokenizer_smoke PRIVATE include)

add_executable(tokenizer_edge_cases
    tests/tokenizer_edge_cases.cpp
    src/Tokenizer.cpp
)

target_include_directories(tokenizer_edge_cases PRIVATE include)

add_test(NAME tokenizer_smoke COMMAND tokenizer_smoke)
add_test(NAME tokenizer_edge_cases COMMAND tokenizer_edge_cases)
