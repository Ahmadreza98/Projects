# Variables
Variables are essential in every programming language, and `C` is no different. This subsequent segment details different data categories, along with methods to establish variables and provide them with values.

>**NOTES**: The general structure of the data definition is as follows:
>>`type key number` + `name variable` = `value based on type key number;`
##### 1. Integer or `int:`
To numbers that do not have a decimal part, regardless of whether they are positive or negative.
```C
# include <stdio.h>

int main() {
	
	int age = 25;
	int apples = 15;
	int shoes = 5;
	
	printf("You are %d years old.", age);
	
	return 0;
}
```
**NOTE:** To insert a number into a string, we use the `%d` symbol at the desired location.
##### 2. `float:`
Numbers that include integers, with the difference that they allow for decimal fractions.
```C
# include <stdio.h>

int main() {
	
	float height = 175.5;
	float weight = 95.5;
	float money = 28.25;
	
	printf("The your height is %f", height);
	printf("The your weight is %.3f", weight);
	
	return 0;
}
```
**NOTE-1:** The number of decimal places in this data type is limited.
**NOTE-2:** To insert a number into a string, we use the `%f` symbol at the desired location.
**NOTE-3**: The format specifier `%.#f` is used to display a specific digit of decimal places. You can specify the desired digit of decimal places by replacing `#` with that number.
##### 3. `double:`
A number similar to the previous structure, but with fewer decimal places.
```C
# include <stdio.h>

int main() {
	
	double PI = 3.14159265359978;
	
	printf("The your height is %lf", PI);
	
	return 0;
}
```
**NOTE:** To insert a number into a string, we use the `%lf` symbol at the desired location.
##### 4. `char:`
`char` is used to define a character or a string.
```C
# include <stdio.h>

int main() {
	
	char grade = 'A';
	char name[5] = "Jack";
	char full_name[] = "Jack Smith";
	
	printf("Your grade is %c", grade);
	printf("Your grade is %s", name);
	printf("Your grade is %s", full_name);
	
	return 0;
}
```
**NOTE-1:** To input a string, you must specify its character count in brackets `[]` after the variable name, or provide no input.
**NOTE-2:** To insert a character or a string into a string, the `%c` and `%s` specifiers must be used, respectively.
##### 5. Boolean or `bool:`
To use Boolean, you must first include the `<stdbool.h>` library.
```C
#include <stdio.h>
#include <stdbool.h>

int main() {
	
	bool is_home = True;
	printf("Sara is home: %d", is_home);

	return 0;
}
```