# Queue Implementation Using Linked List in C

This project demonstrates a dynamic Queue implementation using a singly linked list in the C programming language. It provides basic queue operations such as enqueue, dequeue, peek, and displaying the contents of the queue.

---

## 🔧 Features

- ✅ Enqueue (Insert element at the rear)
- ✅ Dequeue (Remove element from the front)
- ✅ Peek (View the front element)
- ✅ End (View the rear element)
- ✅ Show (Display the full queue)
- ✅ Memory-safe exit with `FreeQueue()` to avoid leaks

---

## 📁 File Structure

- `queue.c`: Contains the full source code
- No external libraries required beyond the standard C library

---

## 🚀 How It Works

The queue is implemented using a dynamically allocated singly linked list. Each node contains an integer value and a pointer to the next node.

### Main Components

- `Node` structure: Holds the data and pointer to the next node
- `Enqueue()`: Adds a node to the rear
- `Dequeue()`: Removes a node from the front
- `CheckPeek()`: Returns the value at the front without removing it
- `CheckEnd()`: Returns the value at the rear
- `ShowQueue()`: Prints the entire queue
- `FreeQueue()`: Frees all allocated memory

---

## 🖥️ Example Menu

