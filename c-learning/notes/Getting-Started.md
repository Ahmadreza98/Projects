# Getting Started
Initially, files that exist in the `.c` format mean that their writing language is `C`. for example `main.c`, this file is a `C` language programing.

This is a pre-processing command. Usually, the libraries needed for the project or the ones you have created are mentioned in this section.
```C
#include <stdio.h>
```
The `#include` statement must be placed at the beginning of the import of libraries. Also, the format of the libraries is `.h`.  A library that is frequently utilized is `<stdio.h>`, which enables you to handle input and output within your program.

Next, the `main` function must be defined. The program will not run at all without it. The function is usually of type `int` and has no inputs.
```c
#include <stdin.h>

int main(){
	
	// write code
	
	return 0;
}
```
In C language, the main function is expected to return an integer value as output. `return 0;`
Returning `0` to the operating system means the program executed correctly, and returning `1` means the program encountered an error.

Since `C99`, returning a number has become unnecessary. But it is better to use it. There's a possibility that someone is running your program with an older `C90` version.

**NOTE-1:** A semicolon `;` is required at the end of each line of code; otherwise, the program will encounter an error.

**NOTE-2:** To write a single-line comment, the `//` symbol must be used. Also, for multi-line comments, the `/*...*/` notation must be used.
```C
#include <stdio.h>

int main() {

	// a single comment
	
	/* this a multi comment
	you can write any help or notes in comment
	*/

}
```
