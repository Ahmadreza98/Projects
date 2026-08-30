# Pointer
A pointer is a variable that stores the memory address of another variable. Instead of holding a direct value, it holds the address where the value is stored in memory. It is the backbone of low-level memory manipulation in C.
- A pointer is declared using its data type followed by an asterisk `(*)` and the pointer name, indicating the type of data it can store the address of.
- A pointer variable stores the memory address of another variable, while the dereference operator `(*)` is used to access the value stored at that address.
- The * symbol has two purposes in C: it is used to declare a pointer and to dereference a pointer to access the value it points to.
```C
#include <stdio.h>

int main()
{

    // Normal Variable
    int var = 10;

    // Pointer Variable ptr that stores address of var
    int *ptr = &var;

    // Directly accessing ptr will give us an address
    printf("%p", ptr); // output: 0x7fffffffe9cc

    return 0;
}
```
This hexadecimal integer (starting with 0x) is the memory address.

![[Pasted image 20260830125209.png]]

Let us understand different steps of the above program.
### Syntax

> `data_type *pointer_name;`

### Initialize the Pointer

A pointer is initialized by assigning it the address of a variable using the address operator `(&)`
- Initializing a pointer ensures it points to a valid memory location before use.
- You can also initialize a pointer to NULL if it doesn’t point to any variable yet: int `*ptr = NULL;`
### Syntax

> `pointer_name = &variable;`

### Dereference a Pointer

We have to first **dereference** the pointer to access the value present at the memory address. This is done with the help of dereferencing operator`(*)` (same operator used in declaration).
```C
#include <stdio.h>

int main() {
    int var = 10;
    
    // Store address of var variable
    int* ptr = &var;
    
    // Dereferencing ptr to access the value
    printf("%d", *ptr); //output: 10
    
    return 0;
}
```
### Size of Pointers
The size of a pointer in C depends on the architecture (bit system) of the machine, not the data type it points to.
- On a 32-bit system, all pointers typically occupy 4 bytes.
- On a 64-bit system, all pointers typically occupy 8 bytes.
The size remains constant regardless of the data type (`int*`, `char*`, `float*`, etc.).
```C
#include <stdio.h>

int main() {
    int *ptr1;
    char *ptr2;
    
    // Finding size using sizeof()
    printf("%zu\n", sizeof(ptr1)); // output: 8
    printf("%zu", sizeof(ptr2)); // output: 8
    
    return 0;
}
```
### Special Types of Pointers
There are 4 special types of pointers that used or referred to in different contexts:
##### 1. NULL Pointer:
A **NULL Pointers** is a pointer that does not point to any valid memory location. It is created by assigning the value NULL to a pointer variable.
- A pointer of any data type can be initialized or assigned with NULL to indicate that it is not pointing to any object.
- Checking whether a pointer is NULL helps prevent invalid memory access and ensures the pointer references a valid memory location before use.
```C
#include <stdio.h>

int main() {
    // Null pointer
    int *ptr = NULL;
    
    return 0;
}
```
##### 2. Void Pointer:
The **void pointers** is a pointer of type void that does not have an associated data type. It is also known as a generic pointer because it can store the address of any data type.
- A void pointer can point to variables of any data type but must be typecast before dereferencing.
- It is commonly used in generic functions and memory management routines where the data type is not known in advance.
```C
#include <stdio.h>

int main() {
    // Void pointer
    void *ptr;
    
    return 0;
}
```
##### 3. Wild Pointer:
The **wild pointer** is a pointer that has been declared but not initialized with a valid memory address. Using a wild pointer results in undefined behavior.
- Dereferencing a wild pointer can cause program crashes, memory corruption, or unexpected results.
- Always initialize pointers with a valid address or NULL before using them to avoid errors.
```C
#include <stdio.h>

int main() {

    // Wild Pointer
    int *ptr;
    
    return 0;
}
```
##### 4. Dangling Pointer
A **dangling pointer** is a pointer that refers to a memory location that has already been deallocated or freed. Accessing such a pointer leads to undefined behavior.
- Dereferencing a dangling pointer can cause program crashes, incorrect results, or memory access errors.
- Dangling pointers commonly occur when dynamically allocated memory is freed but the pointer is not updated or set to NULL.
```C
#include <stdio.h>
#include <stdlib.h>

int main() {
    int* ptr = (int*)malloc(sizeof(int));

    // After below free call, ptr becomes a dangling pointer
    free(ptr);
    printf("Memory freed\n");

    // removing Dangling Pointer
    ptr = NULL;

    return 0;
}
```
### C Pointer Arithmetic
The **pointer arithmetic** refers to the arithmetic operations that can be performed on a pointer. It is slightly different from the ones that we generally use for mathematical calculations as only a limited set of operations can be performed on pointers. These operations include:
- Increment/Decrement
- Addition/Subtraction of Integer
- Subtracting Two Pointers of Same Type
- Comparing/Assigning Two Pointers of Same Type
- Comparing/Assigning with NULL
### Constant Pointers
In constant pointers, the memory address stored inside the pointer is constant and cannot be modified once it is defined. It will always point to the same memory address.
```C
#include <stdio.h>

int main() {
    int a = 90;
    int b = 50;

    // Creating a constant pointer
    int* const ptr = &a;
    
    // Trying to reassign it to b
    ptr = &b;

    return 0;
}
```
>**Output**
solution.c: In function ‘main’:  
solution.c:11:9: error: assignment of read-only variable ‘ptr’  
   11 |     ptr = &b;

As we try here to assign `ptr` a new address, the compiler throws an error because a constant pointer cannot change the memory location it was originally assigned.
### Pointer to Function
A **function pointer** is a pointer that stores the address of a function instead of a variable. It allows functions to be called indirectly and passed as arguments to other functions.
- Function pointers enable dynamic function calls and are commonly used to implement callback functions.
- They are widely used in event-driven programming, function tables, and flexible program design.
```C
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
  
    // Declare a function pointer that matches
  	// the signature of add() function
    int (*fptr)(int, int);

    // Assign address of add()
    fptr = &add;

    // Call the function via ptr
    printf("%d", fptr(10, 5));

    return 0;
}
```
### Multilevel Pointers
A **multi-level pointers** is a pointer that stores the address of another pointer instead of directly pointing to a data value. The most common type is a double pointer `(**)`, which points to another pointer.
- Multi-level pointers can have multiple levels (such as `**, ***, ****`) depending on the application.
- They are commonly used for dynamic memory allocation, passing pointers to functions, and managing complex data structures.
```C
#include <stdio.h>

int main() {
    int var = 10;
  
    // Pointer to int
    int *ptr1 = &var;
  
    // Pointer to pointer (double pointer)
    int **ptr2 = &ptr1;  

    // Accessing values using all three
    printf("var: %d\n", var);          
    printf("*ptr1: %d\n", *ptr1);
    printf("**ptr2: %d", **ptr2);

    return 0;
}
```
