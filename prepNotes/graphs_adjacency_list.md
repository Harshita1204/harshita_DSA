# Adjacency List in Graph (Data Structures)

## Introduction

A graph is a data structure used to represent relationships between objects.  
The objects are called **vertices (or nodes)** and the connections between them are called **edges**.

There are different ways to represent a graph in memory. One very common and memory-efficient method is called an **Adjacency List**.

An **Adjacency List** represents a graph by storing a **list of neighbors for each vertex**.

Instead of creating a big matrix like in adjacency matrix representation, each vertex simply keeps track of the vertices it is connected to.

This method is very useful when the graph has **fewer edges compared to the number of vertices**.

---

# Definition

An **Adjacency List** is a graph representation where:

Each vertex stores a **list of all vertices connected to it**.

These lists are usually implemented using:

- Linked Lists
- Vectors
- Lists
- Arrays of lists

---

# Structure of Adjacency List

Suppose we have **4 vertices**

A, B, C, D

Connections:

A — B  
A — C  
B — D  
C — D

The adjacency list representation will look like this:

A → B → C  
B → A → D  
C → A → D  
D → B → C

Explanation:

Vertex A connects to B and C  
Vertex B connects to A and D  
Vertex C connects to A and D  
Vertex D connects to B and C

---

# Graph Diagram (Conceptual)

        A
       / \
      B   C
       \ /
        D

Explanation of this graph:

A connects to B and C  
B connects to A and D  
C connects to A and D  
D connects to B and C

Instead of storing the full matrix, each node simply stores its neighbors.

---

# Adjacency List Representation

| Vertex | Adjacent Vertices |
|------|----------------|
| A | B, C |
| B | A, D |
| C | A, D |
| D | B, C |

Explanation:

The row shows the vertex and the vertices connected to it.

For example:

Vertex A → B, C  
means A has edges with B and C.

---

# Example with Numbers

Vertices:

0, 1, 2, 3

Edges:

0 — 1  
0 — 2  
1 — 3

Adjacency List:

0 → 1 → 2  
1 → 0 → 3  
2 → 0  
3 → 1

Explanation:

Vertex 0 connects to 1 and 2  
Vertex 1 connects to 0 and 3  
Vertex 2 connects only to 0  
Vertex 3 connects only to 1

---

# How the Adjacency List is Created

Step 1  
Create an array where each position represents a vertex.

Step 2  
Each position contains an empty list.

Step 3  
For every edge, add the connected vertices to each other’s lists.

Example:

Edge between 0 and 1

Add 1 to list of 0  
Add 0 to list of 1

---

# Example Process

Vertices = 4

Edges:

0 — 1  
0 — 2  
1 — 3

Start with empty lists:

0 →  
1 →  
2 →  
3 →

Add edge 0 — 1:

0 → 1  
1 → 0

Add edge 0 — 2:

0 → 1 → 2  
2 → 0

Add edge 1 — 3:

1 → 0 → 3  
3 → 1

Final adjacency list:

0 → 1 → 2  
1 → 0 → 3  
2 → 0  
3 → 1

---

# Space Complexity

Space complexity of adjacency list is:

O(V + E)

Where:

V = number of vertices  
E = number of edges

This is more efficient because we only store existing edges.

---

# Time Complexity

Checking if an edge exists may require scanning the list.

Worst case time complexity:

O(V)

because we may need to search through the list.

---

# Advantages of Adjacency List

1. Uses less memory
2. Efficient for sparse graphs
3. Stores only existing edges
4. Easy to add new vertices and edges
5. Flexible and widely used in real applications

---

# Disadvantages of Adjacency List

1. Checking whether an edge exists takes more time
2. Implementation can be slightly more complex
3. Not as fast as adjacency matrix for direct edge lookup

---

# Real Life Example

Think about **friend lists on social media**.

Each person keeps a **list of their friends**.

Example:

A → B, C  
B → A, D  
C → A  
D → B

Instead of creating a big table of all users, each person simply stores their own friend list.

This is exactly how adjacency lists work.

---

# Short Exam Definition

Adjacency List is a graph representation method where each vertex stores a list of all adjacent vertices connected to it.

---

# Key Points to Remember

Adjacency List stores **neighbors of each vertex**

Space Complexity = **O(V + E)**

Efficient for **sparse graphs**

Uses **arrays of lists or vectors**

Stores only **existing edges**

---
