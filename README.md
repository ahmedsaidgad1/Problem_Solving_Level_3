# Problem Solving — Level 3

A collection of core data structures implemented from scratch in **C++**, built as part of Problem Solving / OOP coursework. Each project focuses on one data structure, implemented as a custom class and exercised through a demo `main()` that prints the results of each operation to the console.

## 📂 Projects

| # | Folder | Data Structure | Key File |
|---|--------|-----------------|----------|
| 1 | [`project_1`](./project_1) | Doubly Linked List | `cls_Db_LinkedList.h` |
| 2 | [`project_2`](./project_2) | Queue (linked-list based) | `cls_My_Queue.h` |
| 3 | [`project_3`](./project_3) | Stack (linked-list based) | `cls_My_Stack.h` |
| 4 | [`project_4`](./project_4) | Dynamic Array | `cls_My_Dynamic_Array.h` |
| 5 | [`project_5`](./project_5) | Queue (array based) | `cls_My_Queue_Arr.h` |
| 6 | [`project_6`](./project_6) | Custom String with Undo/Redo | `cls_My_String.h` |

Each folder contains:
- One or more header files (`.h`) with the class implementation (templated where relevant, using C++ generics).
- A `Main.cpp` that builds the structure, performs a sequence of operations (insert, push, pop, find, undo/redo, etc.), and prints a formatted trace of each step.

## 🧠 What each project demonstrates

- **Project 1 — Doubly Linked List**: node insertion at the beginning/after a given node, searching, and printing the list, with `Node` pointers in both directions.
- **Project 2 — Queue (Linked List)**: FIFO queue built on top of a linked structure, with push/pop and full state printing after each step.
- **Project 3 — Stack (Linked List)**: LIFO stack with push/pop, demonstrated the same way as the queue.
- **Project 4 — Dynamic Array**: a resizable array class with `Set_Item`, growth handling, and bounds-safe access.
- **Project 5 — Queue (Array)**: a queue implemented over a fixed/resizable array instead of linked nodes, useful for comparing the two underlying strategies.
- **Project 6 — Custom String**: a `String` class with value tracking that supports **undo/redo** of successive `Set_Value` calls.

## 🛠 Build & Run

Each project is a standalone C++ program. From inside a project folder:

```bash
g++ -std=c++17 -o main Main.cpp
./main
```

(A pre-built `Main.exe` is included per folder from Windows testing — you can ignore/delete these if you build on your own machine.)

## 📌 Notes

- All structures are implemented manually (no STL containers used for the core logic) to reinforce data-structure fundamentals.
- Folder naming will be standardized to `project_1` … `project_6` for consistency (some folders currently use `Project_` with a capital P).

## 👤 Author

**Ahmed Said Gad** — Computer Science student, Ain Shams University
LinkedIn: [Ahmed Said Gad](https://www.linkedin.com/in/ahmed-said-gad/)
GitHub: [@ahmedsaidgad1](https://github.com/ahmedsaidgad1)
