## Vocabulary to know

**Primitive vs. Non-primitive**

What to know about primitive data structures:
<li>Store values of a single type

For example, a integer variable if initialized as an integer can only store integer values.

As the name might suggest, non-primitive data structures are not as limited. Non-primitive data structures can store multiple types of data. Examples include: lists, arrays, stacks, structs, and more.

Non-primitive data types are broken into two categories:
<li>Linear
<li>Non-linear

**Linear vs. Non-linear:**

As the name suggests, linear data structures are ordered, storing data in a line. When the order with which the data is presented matters, you use linear data structures.

```C
int arr[5] = {0,1,2,3,4};
```
Non-linear structures allow branching or multiple paths. I wasn't familiar with many examples of them, but after some research, I've learned that trees and graphs are considered non-linear data structures.


![](https://static.javatpoint.com/ds/images/primitive-vs-non-primitive-data-structure.png)

**Linked Lists:**

A linear data structure where elements, called nodes, are linked by pointers, allowing dynamic memory allocation.

**Stacks:**

A linear data structure with Last-In-First-Out (LIFO) access, supporting operations like push and pop.


![](https://www.primarygames.com/puzzles/strategy/watersort/logo200.png)

**Queues:**

A linear data structure supporting operations like enqueue and dequeue. Just like an actual queue, the linear structure means the first value in is the first value out.


![](https://scaler.com/topics/images/difference-between-primitive-and-non-primitive-data-structures-5.webp)


**Trees:**

A non-linear data structure composed of nodes connected by edges, with one designated as the root, allowing hierarchical representation.


![](https://scaler.com/topics/images/difference-between-primitive-and-non-primitive-data-structures-6.webp)

**Graphs:**

Non-linear data structure comprising vertices connected by edges, representing relationships between objects.

**Traversing:**

Process of accessing and visiting all elements of a data structure in a specific order.

**Searching:**

Process of finding a target element within a data structure. Think about ***for*** loops searching through a list to check for a specific condition.

```python
numbers = [1, 24, 33, 2, 8, 0]

for i in numbers:
    if name == 33:
        break
```

**Inserting / Deleting:**

Operations to add or remove elements from a data structure.
Examples include appending items to a list.


**Sorting:**

Process of arranging elements in a specific order such as ascending or descending.
For example, sorting an array of student names alphabetically.

**Merging:**

Combining two or more data structures into a single structure while maintaining the original properties. The Base64 Encoding assignment we completed earlier in the year is an example of merging.


## References: 

[JavaTPoint](https://www.javatpoint.com/primitive-vs-non-primitive-data-structure)

[Scaler Topics](https://www.scaler.com/topics/difference-between-primitive-and-non-primitive-data-structures/)