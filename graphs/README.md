# Graph Algorithms

This folder contains classic and foundational graph traversal and pathfinding algorithms implemented in C++.

## Contents

- `dfs.cpp`: Depth-First Search
- `bfs.cpp`: Breadth-First Search
- `dijkstra.cpp`: Shortest path using Dijkstra's algorithm
- `topological_sort.cpp`: Topological ordering for DAGs
- `is_connected.cpp`: Checks if the graph is fully connected

## Projects

### Maze Pathfinder

A minimal pathfinding simulation using BFS over a 2D maze.  
The maze is represented as a grid where `0` is an open path and `1` is a wall.

#### Features

- Takes a maze as a 2D grid
- Uses **Breadth-First Search (BFS)** to find if a path exists from start to end
- Easily extendable to visualize or trace path

#### Possible Improvements

- Show the exact path (not just existence)
- Use Dijkstra or A* for weighted grids
- Create random maze generator
- Visualize with ASCII or GUI

#### Why this project?

Pathfinding is one of the clearest ways to demonstrate graph algorithms in action.  
It connects theoretical knowledge with practical and visual problem-solving.

## Why Graphs?

Graphs are essential in everything from compilers to route planning, social networks, and distributed systems.  
Understanding how to implement and apply graph algorithms gives you a major edge in interviews and real-world systems.

## Next Steps

- Bellman-Ford and Floyd-Warshall implementations
- Disjoint Set Union (Union-Find) with Kruskal's Algorithm
- Real-world graph project: GitHub network analyzer
