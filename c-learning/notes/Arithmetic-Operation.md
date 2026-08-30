# Arithmetic Operation
Mathematical and logical operations are considered one of the parts of any language programming. The following operations `+, -, /, *, %, ++, --` are examined.
##### 1. Plus `+`:
Using `+` to sum two or more variables.
```C
#include <stdio.h>

int main() {
	
	int x = 10;
	int y = 20;
	int z = x + y;
	
	printf("Z is: %d", z);
	
	return 0;
}
```
##### 2. Minus `-`:
Using `-` to subtract two or more variables.
```C
#include <stdio.h>

int main() {
	
	int x = 10;
	int y = 20;
	int z = x - y;
	
	printf("Z is: %d", z);
	
	return 0;
}
```
##### 3. Divide `/`:
Using `/` to divide two or more variables.
**NOTE:** At least one of the variables must be of type float.
```C
#include <stdio.h>

int main() {
	
	int x = 10;
	float y = 20;
	float z = x / y;
	
	printf("Z is: %f", z);
	
	return 0;
}
```
##### 4. Multiple `*`:
Using `*` to multiple two or more variables.
```C
#include <stdio.h>

int main() {
	
	int x = 10;
	int y = 20;
	int z = x * y;
	
	printf("Z is: %d", z);
	
	return 0;
}
```
##### 5. Modulo `%`:
Using `%` to remainder two variables.
```C
#include <stdio.h>

int main() {
	
	int x = 10;
	int y = 20;
	float z = x % y;
	
	printf("Z is: %f", z);
	
	return 0;
}
```
##### 6. P-Plus `++`:
Using `++` to increase one unit of value
```C
#include <stdio.h>

int main() {
	
	int x = 10;
	x++;
	
	printf("x is: %f", x);
	
	return 0;
}
```
##### 7. M-Minus `--`:
Using `--` to decrease one unit of value.
```C
#include <stdio.h>

int main() {
	
	int x = 10;
	x--;
	
	printf("x is: %f", x);
	
	return 0;
}
```
