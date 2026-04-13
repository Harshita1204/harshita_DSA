# Adjacency Matrix in Graph (Data Structures)

## Introduction

A graph is a data structure used to represent relationships between objects.  
The objects are called **vertices (or nodes)** and the connections between them are called **edges**.

There are different ways to represent a graph in memory. One of the most common methods is called an **Adjacency Matrix**.

An **Adjacency Matrix** is a way of storing a graph using a **2-dimensional array (matrix)**.  
This matrix shows whether there is a connection (edge) between two vertices.

If a graph has **V vertices**, the adjacency matrix will have **V rows and V columns**.

So the size of the matrix will always be:

V × V

---

# Definition

An **Adjacency Matrix** is a square matrix used to represent a graph where:

- Rows represent the **source vertex**
- Columns represent the **destination vertex**
- Each cell shows whether an edge exists between two vertices

Value meanings:

0 → No edge exists  
1 → Edge exists

---

# Structure of Adjacency Matrix

Suppose we have **4 vertices**

A, B, C, D

The adjacency matrix will look like this:

|   | A | B | C | D |
|---|---|---|---|---|
| A | 0 | 1 | 1 | 0 |
| B | 1 | 0 | 0 | 1 |
| C | 1 | 0 | 0 | 1 |
| D | 0 | 1 | 1 | 0 |

Explanation:

Row A shows connections from vertex **A** to other vertices.

A → B = 1 means there is an edge between A and B  
A → C = 1 means there is an edge between A and C  
A → D = 0 means there is no edge between A and D

---

# Example Graph

Consider the following graph connections:

A — B  
A — C  
B — D  
C — D

This means:

A is connected to B and C  
B is connected to A and D  
C is connected to A and D  
D is connected to B and C

---

# Adjacency Matrix Representation

|   | A | B | C | D |
|---|---|---|---|---|
| A | 0 | 1 | 1 | 0 |
| B | 1 | 0 | 0 | 1 |
| C | 1 | 0 | 0 | 1 |
| D | 0 | 1 | 1 | 0 |

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

This structure is exactly what we store in the adjacency matrix.

---

# How the Matrix is Filled

Step 1  
Create a matrix of size **V × V**

Step 2  
Initialize all values with **0**

Step 3  
For every edge between two vertices, set the value to **1**

Example:

Edge A — B  
So

Matrix[A][B] = 1  
Matrix[B][A] = 1

Because the graph is **undirected**.

---

# Example with Numbers

Vertices:

0, 1, 2, 3

Edges:

0 — 1  
0 — 2  
1 — 3

Matrix:

|   |0|1|2|3|
|---|---|---|---|---|
|0|0|1|1|0|
|1|1|0|0|1|
|2|1|0|0|0|
|3|0|1|0|0|

Explanation:

0 → 1 = edge exists  
0 → 2 = edge exists  
1 → 3 = edge exists

All other cells remain 0.

---

# Weighted Graph Adjacency Matrix

Sometimes edges have **weights** (distance, cost, time).

Instead of storing **1**, we store the **weight value**.

Example:

|   |A|B|C|
|---|---|---|---|
|A|0|5|3|
|B|5|0|2|
|C|3|2|0|

Explanation:

A → B weight = 5  
A → C weight = 3  
B → C weight = 2

---

# Time Complexity

Checking if an edge exists:

O(1)

Because we can directly access the matrix cell.

Example:

Matrix[2][3]

---

# Space Complexity

O(V²)

Because the matrix always stores V × V elements.

Even if there are very few edges, the full matrix is still created.

---

# Advantages of Adjacency Matrix

1. Very simple to implement
2. Edge lookup is extremely fast
3. Good for **dense graphs**
4. Easy to understand and visualize

---

# Disadvantages of Adjacency Matrix

1. Uses a lot of memory
2. Not efficient for sparse graphs
3. Many matrix cells remain unused

Example:

If there are **1000 vertices but only 10 edges**,  
most of the matrix will contain **0 values**, which wastes space.

---

# Real Life Example

Think about a **city flight map**.

Cities = Vertices  
Flights = Edges

If we use an adjacency matrix:

Each row = source city  
Each column = destination city

Value 1 means a direct flight exists.

Example:

Delhi → Mumbai = 1  
Delhi → London = 0

---

# Definition

Adjacency Matrix is a method of representing a graph using a **2-dimensional array**, where each cell indicates whether there is an edge between two vertices.

---

# Key Points to Remember

Adjacency Matrix uses a **2D array**  
Matrix size = **V × V**  
0 means **no edge**  
1 means **edge exists**  
Space Complexity = **O(V²)** 
Edge lookup time = **O(1)**

---


