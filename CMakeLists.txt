cmake_minimum_required(VERSION 3.15)

project(minisearchengine LANGUAGES CXX)

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
