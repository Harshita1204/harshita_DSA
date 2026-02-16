# Stack Memory vs Heap Memory

# What is Memory?
-> Memory is used to store data while a program runs.
-> There are two main types:
   -> Stack Memory
   -> Heap Memory

--------------------------------------------------

# Stack Memory

-> Stack memory is automatic memory.
-> It stores local variables and function calls.
-> Memory is allocated and removed automatically.
-> It follows LIFO (Last In First Out).
-> Faster than heap memory.
-> Limited in size.

# Example 1 (Simple Variable)

```cpp
int main() {
    int x = 10;   // stored in stack
}
```

-> Here, variable x is stored in stack memory.
-> When main() finishes, x is automatically removed.

# Example 2 (Function Call)

```cpp
void print() {
    int a = 5;   // stored in stack
}

int main() {
    print();
}
```

-> When print() is called, memory for a is created in stack.
-> After print() finishes, memory is removed automatically.

# Stack Features

-> Stores local variables
-> Stores function parameters
-> Automatically managed
-> Fast access
-> Small size
-> Cannot manually free memory

--------------------------------------------------

# Heap Memory

-> Heap memory is dynamic memory.
-> Memory is allocated manually.
-> It does not get removed automatically.
-> Slower than stack.
-> Larger in size.
-> Programmer must free memory.

# Example (Dynamic Memory)

```cpp
int main() {
    int* ptr = new int;   // allocated in heap
    *ptr = 20;

    delete ptr;           // manually free memory
}
```

-> Memory is created in heap using new.
-> If delete is not used, memory leak happens.

# Heap Features

-> Used for dynamic memory allocation
-> Allocated using new
-> Freed using delete
-> Bigger memory size
-> Slower than stack
-> Manual control

--------------------------------------------------

# Key Differences

-> Stack is automatic, Heap is manual.
-> Stack is faster, Heap is slower.
-> Stack size is limited, Heap size is larger.
-> Stack memory is cleaned automatically.
-> Heap memory must be cleaned using delete.

--------------------------------------------------

# Easy Real-Life Example

-> Stack is like books kept one over another.
   -> Last book kept will be removed first.

-> Heap is like a storage room.
   -> You choose where to keep things.
   -> You must clean it yourself.

--------------------------------------------------

