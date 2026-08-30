# Function
all a function is is a reusable section of code that can be invoked, also known as calling a function. functions are nice because we don't have to repeat ourselves.
```C
reutrn_type function_name(arguments) {
	
	// function body
	return expression
}
```
Functions fall into two general categories: `returning` and `non-returning`. A function that returns a value (or values) after performing an operation is called a `returning-function`, whereas one that does not is called a `non-returning function`.
```C
#include <stdio.h>

// Function definition (returning function)
int add(int a, int b) {
    return a + b;
}
// Function definition (non-returning function)
void HappyBirthDay(char name[30], int age) {

    printf("Happy Birth Day!\n");
    printf("Happy Birth Day!\n");
    printf("Happy Birth Day, %s!\n", name);
    printf("Your age is %d years old.\n", age);
}

int main() {
    
    // Function call
    int result = add(5, 3);
    printf("The sum is: %d", result);
    return 0;
}
```
