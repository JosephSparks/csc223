# Chapter 8.1: Introduction to Queues

- **Understanding Queues:**
  - Queues are exemplified through various real-world analogies (think lines)
    - People boarding an escalator: The first person to step on is the first to get off.
    - Passengers waiting for a bus: The person at the front of the line boards first.
    - Customers at a ticketing window: The first person in line receives service first.
    - Luggage on conveyor belts: The bag placed first is the first to come out.
    - Vehicles at a toll bridge: The first car to arrive leaves first.
  - Key Principle: The initial element added is the first to be served (FIFO - First-In, First-Out).

- **Definition:**
  - A Queue is a FIFO (First-In, First-Out) data structure.
  - The element inserted first is the first to be removed.
  - Elements are added at one end (REAR) and removed from the other end (FRONT).

- **Implementation:**
  - Queues can be implemented using either arrays or linked lists.
  - This section discusses implementations using both data structures.

# Chapter 8.2: Array Representation of Queues

- **Using Arrays for Representation:**
  - Queues can be represented using linear arrays.
  - Each queue has FRONT and REAR variables indicating positions for insertions and deletions respectively.

- **Queue Operations:**
  - Adding Elements:
    - Increment REAR by 1 and place the new element at the position indicated by REAR.
  - Deleting Elements:
    - Increment FRONT by 1.
    - Deletions occur from the FRONT end of the queue.
  - Handling Overflow and Underflow Conditions:
    - Overflow: Occurs when trying to insert into a full queue (REAR = MAX - 1).
    - Underflow: Occurs when trying to delete from an empty queue (FRONT = -1 and REAR = -1).

- **Algorithms:**
  - Insertion Algorithm:
    1. Check for overflow condition.
    2. If the queue is empty, set FRONT and REAR to 0; otherwise, increment REAR.
    3. Store the value in the queue at the position indicated by REAR.
    1. Check for underflow condition.
    2. If the queue has values, increment FRONT to point to the next value.

# Chapter 8.3: Linked Representation of Queues

- **Array vs. Linked Representation:**
  - Arrays: Have a fixed size and are efficient for small or known maximum size queues.
  - Linked Lists: Provide dynamic sizing, suitable for cases where size cannot be predetermined.

- **Storage and Time Requirements:**
  - Linked representation: Requires O(n) storage, O(1) time for operations.

- **Linked Queue Representation:**
  - Each element in a linked queue possesses data and a pointer to the subsequent element.
  - The START pointer of the linked list serves as FRONT, while an additional pointer, REAR, points to the last element.
  - All insertions occur at the rear end, and deletions at the front end. If FRONT = REAR = NULL, the queue is empty.

- **Operations on Linked Queues:**
  - **Insert Operation:**
    - Adds an element to the end of the queue.
    - If the queue is empty, the new node becomes both FRONT and REAR.
    - Otherwise, insert at the rear end and update the REAR pointer.
  - **Delete Operation:**
    - Removes the first element inserted in the queue (the element at FRONT).
    - Verify underflow (empty queue) before deletion.