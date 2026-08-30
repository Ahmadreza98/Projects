# User Input
In programming languages, the user often has to enter values ​​into the program, which then performs an operation based on the inputs. User input values require a defined variable for storage. The `scanf` command is used to receive input from the user.
**NOTE-1:** Numeric variables must have a default value, otherwise they will have a value.
##### 1. Scanf `int`:
```C
#include <stdio.h>

int main() {
	
	int age = 0;
	
	printf("Enter your age: ");
	scanf("%d", &age);
	
	return 0;
}
```
##### 2. Scanf `float`:
```C
#include <stdio.h>

int main() {
	
	float gpa = 0.0f;
	
	printf("Enter your gpa: ");
	scanf("%.f", &gpa);
	
	return 0;
}
```
##### 3. Scanf `char`:
**NOTE-2:** If you define a character input, be sure to include a space before %c in the `scanf` command.
```C
#include <stdio.h>

int main() {
	
	char grade = '\0';
	
	printf("Enter your grade: ");
	scanf(" %c", &grade);
	
	return 0;
}
```
##### 4. Scanf `string`:
The problem that `scanf` has with string data is that, if there is a space in the input, it only receives the text before the space. The problem will be solved with the `fget` command.
**NOTE-3:** If the number of entries is large, be sure to use the `getchar` command to create a space for reading the string.
```C
#include <stdio.h>

int main() {
	
	char name[30] = "";
	
	getchar();
	printf("Enter your grade: ");
	fget(name, sizeof(name), stdin);
	
	return 0;
}
```
