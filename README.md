# C++ Search Engine

A search engine built from scratch in C++ to understand and implement the core concepts behind information retrieval, indexing, ranking, and search systems.

The project will begin as a basic local search engine and progressively evolve into an AI-powered intelligent search and knowledge platform.

## Build and Run

The project uses CMake and requires C++17 or newer.

```bash
cmake -S . -B build
cmake --build build
./build/search_engine
```

Pass a term to search for it directly:

```bash
./build/search_engine search
./build/search_engine algorithms
```

On Windows with a multi-config generator, run the executable from the generated configuration directory, for example `build/Debug/search_engine.exe`.

## Project Vision

```text
Basic C++ Search Engine
        ↓
Advanced Information Retrieval
        ↓
Machine Learning Ranking
        ↓
Semantic Search
        ↓
Vector Search
        ↓
RAG
        ↓
LLM Integration
        ↓
AI Agent
        ↓
Distributed Search Platform
```

The goal is not simply to use an existing search library. The core search components will be implemented from scratch wherever practical.

## Current Stage

Phase 1 — Search Engine Foundation

```text
Documents
    ↓
Document Loader
    ↓
Tokenizer
    ↓
Text Normalization
    ↓
Inverted Index
    ↓
Query Processing
    ↓
Search Results
```

The first version operates on local `.txt` documents.

## Progress

- Repository initialized
- Project specification defined
- Git ignore configuration added
- `Document` component implemented
- `DocumentLoader` interface implemented
- File-based document loading implemented
- Sample documents added
- CLI loads real documents
- Tokenizer normalizes text to lowercase terms
- Inverted index stores document postings
- Command-line queries are normalized before lookup

## Planned Features

### Phase 1 — Search Engine Foundation

- Document loading
- File I/O
- Text tokenization
- Text normalization
- Inverted index
- Keyword search
- Document IDs
- Basic query processing

### Phase 2 — Information Retrieval

- Stop-word removal
- Stemming / lemmatization
- Positional indexes
- Phrase search
- Boolean queries
- TF-IDF
- BM25
- Top-K retrieval
- Search result scoring

### Phase 3 — Search Engine Engineering

- Trie-based autocomplete
- Query suggestions
- Search caching
- Multithreaded indexing
- Concurrent search
- Memory optimization
- Performance benchmarking
- Persistent indexes

### Phase 4 — Machine Learning

- Document classification
- Query classification
- Learning-to-rank
- Relevance prediction
- Search personalization

### Phase 5 — Semantic Search

- Text embeddings
- Sentence embeddings
- Vector similarity
- Approximate nearest-neighbor search
- HNSW
- Hybrid keyword + semantic search
- Neural reranking

### Phase 6 — RAG and Generative AI

- Document chunking
- Embedding pipelines
- Retrieval-Augmented Generation
- LLM integration
- Context construction
- Citation generation
- Hallucination reduction
- RAG evaluation

### Phase 7 — AI Agents

- Tool calling
- Function calling
- Agent planning
- Search tools
- Database tools
- Document analysis
- Multi-step workflows
- Agent memory

### Phase 8 — Distributed Search

- Distributed indexing
- Index sharding
- Replication
- Query routing
- Parallel search
- Result aggregation
- Fault tolerance
- Load balancing
- Distributed caching
- Message queues

### Phase 9 — Production Platform

- REST APIs
- Authentication
- Authorization
- Rate limiting
- Docker
- Kubernetes
- CI/CD
- Monitoring
- Logging
- Distributed tracing
- Cloud deployment

## Computer Science Concepts

The project is intended to provide practical experience with:

- Data Structures and Algorithms
- C++
- Object-Oriented Programming
- Low-Level Design
- High-Level Design
- Operating Systems
- Concurrency
- Computer Networks
- Database Management Systems
- Distributed Systems
- Information Retrieval
- Natural Language Processing
- Machine Learning
- Deep Learning
- Transformers
- Generative AI
- Vector Search
- RAG
- AI Agents
- System Design
- Software Engineering
- Cloud Computing
- DevOps
- Cybersecurity
- Performance Engineering

## Technology Stack

### Core

- C++
- CMake
- STL
- Git / GitHub

### AI / ML

- Python
- NumPy
- Pandas
- PyTorch
- Transformers
- Sentence Transformers

### Backend

- REST APIs
- FastAPI
- PostgreSQL
- Redis
- Kafka

### Infrastructure

- Docker
- Kubernetes
- Prometheus
- Grafana
- Cloud infrastructure

The technology stack will be introduced incrementally rather than all at once.

## Development Principles

Each major component should:

1. Have a clear responsibility.
2. Be independently testable.
3. Use appropriate data structures and algorithms.
4. Have measurable performance characteristics.
5. Be designed so future implementations can replace it without rewriting the entire system.

The objective is to understand why each component exists, not merely to implement working code.

## Project Status

Currently under development.

### Completed

- Repository initialized
- Project specification defined
- Document representation
- File loading
- Tokenization
- Text normalization
- Basic inverted index
- Basic keyword search

### In Progress

- Phase 1: Search Engine Foundation

### Next

- Query processing
- Better indexing coverage
- Search result scoring
- Unit tests

## License

License will be added as the project matures.
