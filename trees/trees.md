# Introduction

A tree is described recursively as a collection of one or more nodes, with one node designated as the root and the remaining nodes forming sub-trees of the root. Figure 9.1 illustrates a tree where node A acts as the root, with nodes B, C, and D as its children, forming sub-trees of node A.

## Fundamental Terminology

- **Root node:** The topmost node in the tree, denoted as R. If R = NULL, the tree is considered empty.
- **Sub-trees:** Non-empty sets T1, T2, and T3, if the root node R is not NULL, are referred to as the sub-trees of R.
- **Leaf node:** A node devoid of children.
- **Path:** A consecutive sequence of edges between nodes. For example, the path from node A to node I in Fig. 9.1 is: A, D, and I.
- **Ancestor node:** Predecessor nodes on the path from the root to a particular node.
- **Descendant node:** Successor nodes on any path from a node to a leaf node.
- **Level number:** Each node is assigned a level number, with the root node at level 0 and its children at level number 1.
- **Degree:** The number of children a node possesses. Leaf nodes have a degree of zero.
- **In-degree:** The count of edges arriving at a node.
- **Out-degree:** The count of edges leaving a node.

# Overview of Trees

Trees are classified into six types:

1. General trees
2. Forests
3. Binary trees
4. Binary search trees
5. Expression trees
6. Tournament trees

## General Trees

General trees are hierarchical data structures where each node, except the root, has a parent and may have zero or more sub-trees. Ternary trees, for instance, have three sub-trees per node, but the number of sub-trees can vary.

Representing general trees as abstract data types (ADTs) poses challenges due to the complexity of operations when nodes have multiple possible sub-trees. Converting them to binary trees, although sacrificing some advantages, simplifies operations significantly.

## Forests

A forest comprises disjoint trees, obtained by removing the root and its connecting edges. Every node in a tree is the root of some sub-tree, forming a forest.

A forest can also be seen as an ordered set of zero or more general trees, with the possibility of being empty.

Converting a forest into a tree involves adding a single node as the root, while converting a tree into a forest entails removing the root node.

## Binary Trees

Binary trees consist of nodes where each node can have 0, 1, or at most 2 children. Nodes contain data, left pointers, and right pointers. The root node is pointed by a 'root' pointer; if it's NULL, the tree is empty.

Each node, including terminal nodes, holds a left and right sub-tree.

### Terminology

- **Parent:** A node with left and right successors.
- **Level number:** Assigned to each node, with the root at level 0.
- **Degree of a node:** The count of children.
- **Sibling:** Nodes sharing the same parent.
- **Leaf node:** A node without children.
- **Similar binary trees:** Having identical structures.
- **Copies:** Similar trees with matching node content.
- **Edge:** Connection between nodes.
- **Path:** Sequence of consecutive edges.
- **Depth:** Length of the path from the root to a node.
- **Height of a tree:** The total nodes on the path from root to the deepest node.

#### Complete Binary Trees

Satisfy properties of every level being filled, except possibly the last, and nodes appearing as far left as possible.

## Extended Binary Trees

Each node has either no children or exactly two children. Empty sub-trees are replaced with external nodes.

### Memory Representation

#### Linked representation

Nodes contain data, a pointer to the left node, and a pointer to the right node.

#### Sequential Representation

Utilizes one-dimensional arrays with rules for storing elements and sub-trees.

## Binary Search Trees

A variant of binary trees where nodes are ordered.

## Expression Trees

Used to store algebraic expressions, facilitating evaluation.

## Tournament Trees

Represent matches in tournaments, determining winners through internal and external nodes.

## Creating a Binary Tree from a General Tree

Conversion rules involve assigning the root of the binary tree, determining left and right children based on the general tree's structure.
