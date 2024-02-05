## 2.8-2.12

**Space and Time Complexity**
  - **Big O (Time)**: Time of an algorithm: self-explanatory, the time taken up the execute a function
    - Example: O(n<sup>2</sup>) represents an algorithm with a worst-case time complexity of n<sup>2</sup>.

  - **Big O (Space)**: Space of an algorithm: memory taken up to execute a function
    - Example: O(n) indicates that the algorithm's memory usage grows linearly with the input size.

These notations help analyze and compare the efficiency of algorithms in terms of time and space requirements.

## 2.9 Big O Notation


- **Definition**: Big O notation (O) signifies an upper limit for f(n), representing the maximum growth rate. Big O is meant to represent an algebraic function for how an algorithm 'grows' in memory.

- **Examples**: A list-sort algorithm would be an example of an n<sup>2</sup> function. [freeCodeCamp](https://www.freecodecamp.org/news/big-o-notation-why-it-matters-and-why-it-doesnt-1674cfa8a23c/) has a great webpage that helped me understand.
- **Usage**: By using Big O to understand the absolute upper-bound of a function's growth asymptotically, we can analyze what the 'worst-case' scenario would be.

## 2.10 Omega Notation (my assigned portion)

- **Definition**: Omega notation (Ω) provides a tight lower bound for f(n), indicating the minimum performance level.
- **Use Cases**: From freeCodeCamp—
"The difference between Big O notation and Big Ω notation is that Big O is used to describe the worst case running time for an algorithm. But, Big Ω notation, on the other hand, is used to describe the best case running time for a given algorithm."

Simple breakdown: Big O gives the upper-bound, lets us estimate the absolute worst-possible performance
Big Omega gives us the lower-bound, allows us to estimate the upper-bound

![](https://cdn.kastatic.org/ka-perseus-images/c02e6916d15bacae7a936381af8c6e5a0068f4fd.png)

In this image example, k is some positive constant that must be allow f(x) >= Ω(x)

## 2.11 Theta Notation
- Big Omega tells us the lower bound of the runtime of a function, and Big O tells us the upper bound.
- Often different and we can’t guarantee runtime
- This is where Theta notation comes in
- Theta bounds are when the Big O and Big Omega bounds are the same
- **Example**:
```c
def printNums(arr): #assume normal array of length n with no edge cases
  for num x in arr:
    print(x)
```

## 2.12 Other Useful Notations

### Little O Notation

Little O notation is a way to describe how fast a function grows compared to another function. When we say 

### Little Omega Notation

Little Omega notation (ω(g(n))) represents a loose lower bound that is not asymptotically tight. In simpler terms, it says that a function f(n) grows at least as fast as another function g(n) as n gets infinitely large. However, it doesn't specify exactly how much faster.

### Cool resource I found

![](https://i.stack.imgur.com/2BaDr.png)