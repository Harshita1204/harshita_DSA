POINTERS AND REFERENCE VARIABLES 

Computer memory is like many boxes.
Each box has:
1) a VALUE
2) an ADDRESS (house number)

Example:
int a = 10;

This means:
- A box is created in memory
- Value inside box = 10
- Box has some address (example: 100)

The name "a" is just a label for that box.
The computer actually works using addresses.

--------------------------------------------------

POINTER:

A pointer is a variable that stores the ADDRESS of another variable.
It does NOT store the value directly.

Simple line:
Pointer = address holder

Example:
int a = 10;
int* p = &a;

Explanation step by step:
- a stores value 10
- &a means address of a
- p stores the address of a

So:
a  -> value 10
p  -> address of a

--------------------------------------------------

&  means "address of"
*  means "value at address"

--------------------------------------------------

How pointer works:

int a = 10;
int* p = &a;

cout << a;    // prints 10
cout << &a;   // prints address of a
cout << p;    // prints address of a
cout << *p;   // prints 10

Why *p prints 10?
Because:
- p has address of a
- *p goes to that address
- reads the value stored there

--------------------------------------------------

Changing value using pointer:

int a = 10;
int* p = &a;

*p = 20;

Now value of a becomes 20

Why?
Because *p means:
"Go to the address stored in p and change the value"

So pointer can change the original variable.

--------------------------------------------------

NULL pointer:

int* p = NULL;

This means:
- p is not pointing to any memory
- Safe value for pointer
- Used to avoid garbage address

--------------------------------------------------

REFERENCE VARIABLE:

A reference is another name for the SAME variable.
It does NOT create a new memory box.

Example:
int a = 10;
int& r = a;

Explanation:
- r is just another name of a
- Both refer to the SAME memory

So:
a and r are the same thing

--------------------------------------------------

Reference example:

int a = 10;
int& r = a;

cout << r;   // 10

r = 20;
cout << a;   // 20

Changing r changes a because they are the same box.

--------------------------------------------------

Difference between POINTER and REFERENCE:

Pointer:
- Stores address
- Can be NULL
- Uses * and &
- Can change where it points

Reference:
- Another name of variable
- Cannot be NULL
- No * needed
- Cannot change reference once set

--------------------------------------------------

Why we use pointers and references:

Pointers:
- Dynamic memory
- Linked lists
- Arrays
- Change data using functions

References:
- Function parameters
- Cleaner syntax
- Avoid copying data


