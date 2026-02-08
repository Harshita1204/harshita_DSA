THIS POINTER (this) :

"this" is a special pointer in C++.
It is automatically created inside a class.
It stores the address of the CURRENT object.

**************************************************************
this pointer points to the object that is calling the function.

--------------------------------------------------

Why do we need this pointer?

We need "this" when:
- Data members and function parameters have SAME NAME
- We want to clearly say: "this variable belongs to the object"

--------------------------------------------------

Basic example without this pointer:

class Student {
    int age;
    public:
    Student(int age) {
        age = age;
    }
};

Problem here:
- Which age is which?
- Both names are same
- Compiler gets confused
- Data member does NOT get value

--------------------------------------------------

Same example WITH this pointer:

class Student {
    int age;
    public:
    Student(int age) {
        this->age = age;
    }
};

Explanation step by step:
- this->age means age of current object
- age (right side) is constructor parameter
- Value is stored correctly

--------------------------------------------------
this->age = age;

Means:
"Put parameter age into object's age"

--------------------------------------------------
 example:

#include <iostream>
using namespace std;

class Student {
    int age;
    public:
    Student(int age) {
        this->age = age;
    }

    void show() {
        cout << age;
    }
};

int main() {
    Student s1(20);
    s1.show();
}

Output:
20

--------------------------------------------------

How this pointer works internally:

Student s1(20);

When constructor is called:
this = address of s1 object

So:
this->age means s1.age

--------------------------------------------------

Using this in normal function:

class Box {
    int length;
    public:
    void set(int length) {
        this->length = length;
    }
};

Explanation:
- parameter name = length
- object variable = length
- this->length means object variable

--------------------------------------------------

When this is NOT needed:

class Box {
    int length;
    public:
    void set(int l) {
        length = l;
    }
};

Here:
- names are different
- no confusion
- this is optional

