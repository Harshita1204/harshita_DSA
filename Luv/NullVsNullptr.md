# NULL vs nullptr in C++

# What is NULL?

-> NULL is an old way to represent a null pointer  
-> It is basically the number 0  
-> It comes from C language  
-> It is not type-safe  

Example:

```cpp
int* ptr = NULL;
```

Here NULL is treated like 0.

--------------------------------------------------

# What is nullptr?

-> nullptr is a keyword introduced in C++11  
-> It is specially made for pointers  
-> It is type-safe  
-> It clearly means "this is an empty pointer"  

Example:

```cpp
int* ptr = nullptr;
```

--------------------------------------------------

# Why NULL Can Cause Problems

```cpp
#include <iostream>
using namespace std;

void fun(int x) {
    cout << "Integer function" << endl;
}

void fun(int* x) {
    cout << "Pointer function" << endl;
}

int main() {
    fun(NULL);
}
```

-> NULL is treated as 0  
-> So integer function is called  
-> This may not be what we expect  

--------------------------------------------------

# Using nullptr

```cpp
int main() {
    fun(nullptr);
}
```

-> Now pointer function is called  
-> No confusion  
-> More clear and safe  

--------------------------------------------------

# Key Differences

-> NULL is basically integer 0  
-> nullptr is a special pointer type  
-> NULL can cause confusion in function overloading  
-> nullptr avoids that confusion  
-> NULL is old style  
-> nullptr is modern C++  

--------------------------------------------------

# Which One Should You Use?

-> Always use nullptr in modern C++  
-> Avoid using NULL  

