# Heaps

This folder contains heap-based data structures and algorithms in C++.

## Contents

- `min_heap.cpp`: Demonstrates usage of a min heap using `std::priority_queue`
- `max_heap.cpp`: Classic max heap implementation with priority queue
- `heap_sort.cpp`: Implementation of heap sort algorithm using array-based heap
- `k_largest_elements.cpp`: Finds the top K largest elements using a min heap

## Why Heaps?

Heaps are critical for priority-based systems, efficient sorting, and memory optimization.  
They're widely used in OS schedulers, A* search, and real-time systems.

## Projects

### Priority Task Scheduler

A simple heap-based task scheduler that manages tasks based on priority.

### Why This Project?

This is a practical example of how **heaps** can be used in system-level applications.  
Schedulers are fundamental in OS design, and understanding how to build one improves your understanding of:

- Priority queues
- Dynamic memory usage
- System design principles

### Future Improvements

- Add timestamps or deadlines
- Support for updating task priorities
- GUI/CLI interface
- Logging to file

### How It Works

- Each task has a `name` and a `priority` (lower value = higher priority).
- Tasks are managed using a **min-heap** via `std::priority_queue`.
- The highest-priority task is always processed first.

## Features

- Add tasks dynamically
- Show pending tasks (sorted)
- Process tasks in order of priority

## Next Steps

- Custom binary heap class with insert/delete
- Visual heap builder (ASCII-based)
- Real project idea: Task scheduler using a heap-based priority queue
