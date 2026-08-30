# If Statement
Conditional statements work as follows: if the statement is true, the code within the `{}` is executed; otherwise, it is skipped.
```C
if(statement) {

	// write code

}
```
Another structure for the conditional statement includes an `else` clause. In other words, if the condition is not met, execute it without any preconditions.
```C
if(statement) {

	// write code
	
}else {

	// write code

}
```
Another structure involves using multiple conditions based on a system of prioritization.
```C
if(statement-1) {

	//write code

}else if(statement-2) {

	//write code

}
.
.
.
else {

	//write code

}
```
Additionally, using `&&` or `||`, multiple conditions within a single statement can be logically combined using AND and OR operations, respectively.
```C
if(statement-1 && statement-2) {

	// write code

}
```
OR
```C
if(statement-1 || statement-2) {

	// write code

}
```