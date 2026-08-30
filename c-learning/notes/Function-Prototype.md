# Function Prototype
a **function prototype** is a statement that tells the compiler about the function’s name, its return type, numbers, and data types of its parameters. **Function prototype** provides a means for the compiler to cross-check function parameters and their data type with the function definition and the function call.  

Syntax For Function Prototype in C
`return_type name(type1, type2 ....);`
## Benefits of Function Prototypes

Following are the major benefits of including function prototypes in your program:

- **Function Declaration Before Definition:** It allows a function to be called before [function definition](https://www.geeksforgeeks.org/computer-science-fundamentals/function-declaration-vs-function-definition/). In large programs, it is common to place function prototypes at the beginning of the code or in header files, enabling function calls to occur before the function’s actual implementation.
- **Type Checking:** A function prototype allows the compiler to check that the correct number and type of arguments are passed to the function. If the function is called with the wrong type or number of parameters, the compiler can catch the error.
- **Code Clarity:** By declaring prototypes, you inform the programmer about the function's purpose and expected parameters, which helps in understanding the code structure.
```C
#include <stdio.h>

int sum(int x, int y); // function prototype
int main() {
	int x = 5, y=10; 
	
	printf("Sum of x and y is %d\n",sum(x, y));

	return 0;
}

int sum (int x , int y)
{
    return x+y; 
}
```