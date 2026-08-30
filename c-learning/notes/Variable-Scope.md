# Variable Scope
**Scope** refers to the region where variables can be used and evaluated. In general, the scope comprises 3 areas. We explain each of them below.
##### 1. Block Scope `{ }`:
Variables defined only within `{ }`, such as in **functions**, **if statements**, **loops**, etc.
```C
#include <stdio>

int main() {
	
	int x = 20;
	{
		int y = 40;
		printf("X=%d",x); // the x variable is Accessible.
	}
	printf("Y=%d",y); // the y variable is not Accessible.
	return 0;
}
```
##### 2. File Scope:
Variables defined as public are accessible throughout the project's structures.
```C
#include <stdio>

int incorrent = 0;

int main() {
	
	incorrent++;
	printf("%d",incorrent); // It's Ok.
	
	return 0;
}
```
##### 3. Function Scope:
Local variables within functions are inaccessible in other functions.
```C
#include <stdio>

function add(int x, int y) {
	int sum = x+y;
	return sum;
}

function subtract(int x, int y) {
	int minus = x-y;
	return minus;
}

int main() {

	int z = sum(10, 20);
	int w = subtract(10, 20);
	
	return 0;
}
```