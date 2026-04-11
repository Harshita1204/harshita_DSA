# Trees in Data Structures

A Tree is a non-linear data structure used to store data in a hierarchical form. Unlike arrays or linked lists where data is stored in a straight line, trees organize data in levels. Trees are widely used in computer science to represent hierarchical relationships such as file systems, organizational structures, and database indexing.

In a tree, data is stored in units called nodes. Each node contains a value and may have links to other nodes. The topmost node of a tree is called the root node. From the root node, other nodes are connected forming branches. These branches create a structure similar to an inverted tree.

A tree starts with a single root node. From the root, nodes may connect to other nodes called children. Each child node may further connect to more nodes. This continues until nodes with no children appear at the bottom of the tree.

Trees are useful because they allow efficient searching, insertion, and deletion of data. Many algorithms use trees because they represent hierarchical relationships clearly.

# Basic Terminology of Trees

Root  
The root is the topmost node of a tree. It is the starting point of the tree structure. Every tree has exactly one root node.

Node  
A node is a basic element of a tree that stores data. Each node may contain a value and pointers or references to other nodes.

Edge  
An edge is the connection between two nodes. It represents the relationship between a parent node and a child node.

Parent Node  
A parent node is a node that has one or more child nodes connected to it.

Child Node  
A node that is connected below another node is called a child node.

Leaf Node  
A node that has no children is called a leaf node. Leaf nodes are found at the bottom of the tree.

Internal Node  
Any node that has at least one child is called an internal node.

Subtree  
A subtree is a smaller tree formed from any node of the main tree and its descendants.

Degree of Node  
The degree of a node is the number of children that the node has.

Level of Node  
The level of a node represents its distance from the root. The root node is usually considered at level 0.

Height of Tree  
The height of a tree is the number of edges on the longest path from the root to a leaf node.

Depth of Node  
The depth of a node is the number of edges from the root node to that node.

# Types of Trees

General Tree  
A general tree is a tree where a node can have any number of children.

Binary Tree  
A binary tree is a tree where each node can have at most two children. These children are called the left child and the right child.

Binary Search Tree (BST)  
A binary search tree is a special type of binary tree where:
Left subtree contains values smaller than the root.
Right subtree contains values greater than the root.

Full Binary Tree  
A full binary tree is a tree where every node has either zero or two children.

Complete Binary Tree  
A complete binary tree is a tree where all levels are filled except possibly the last level, and nodes are filled from left to right.

Balanced Binary Tree  
A balanced binary tree is a tree where the difference between the heights of left and right subtrees is minimal.

# Tree Traversal

Traversal means visiting every node of a tree exactly once in a specific order.

Inorder Traversal  
In this traversal the order is:
Left subtree
Root node
Right subtree

Preorder Traversal  
In this traversal the order is:
Root node
Left subtree
Right subtree

Postorder Traversal  
In this traversal the order is:
Left subtree
Right subtree
Root node

Level Order Traversal  
In this traversal nodes are visited level by level starting from the root.

# Operations on Trees

Insertion  
Insertion means adding a new node to the tree at the correct position. In a binary search tree, the value is placed based on comparison with existing nodes.

Deletion  
Deletion means removing a node from the tree while maintaining the tree structure.

Searching  
Searching means finding whether a particular value exists in the tree or not.

Traversal  
Traversal is used to visit all nodes in the tree in a particular order.

Finding Height  
Height of a tree is calculated to determine how many levels the tree contains.

Finding Minimum and Maximum  
In binary search trees, the smallest value is found at the leftmost node and the largest value is found at the rightmost node.

# Advantages of Trees

Trees represent hierarchical data clearly.
Searching operations can be faster compared to linear structures.
Trees are used in many important algorithms and systems such as databases and file systems.
They allow dynamic storage of data.

# Applications of Trees

File system organization in operating systems.
Database indexing using structures like B-trees.
Expression trees in compilers.
Routing algorithms in networks.
Artificial intelligence decision trees.

Trees are one of the most important data structures because they provide an efficient way to store and manage hierarchical data. They form the foundation of many advanced algorithms and structures used in computer science.