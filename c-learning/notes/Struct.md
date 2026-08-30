# Struct
Structures (also called structs) are a way to group several related variables into one place.

Each variable in the structure is known as a **member** of the structure.

Unlike an **array**, a structure can contain many different data types (`int`, `float`, `char`, etc.).
### Create a Structure
You can create a structure by using the `struct` keyword and declare each of its members inside curly braces:
```C
struct MyStructure {   // Structure declaration  
  int myNum;           // Member (int variable)  
  char myLetter;       // Member (char variable)  
};                     // End the structure with a semicolon
```
To access the structure, you must create a variable of it.

Use the `struct` keyword inside the `main()` method, followed by the name of the structure and then the name of the structure variable:
```C
struct myStructure {  
  int myNum;  
  char myLetter;  
};  
  
int main() {  
  struct myStructure s1;  
  return 0;  
}
```
### Access Structure Members
To access members of a structure, use the dot syntax (`.`):
```C
// Create a structure called myStructure  
struct myStructure {  
  int myNum;  
  char myLetter;  
};  
  
int main() {  
  // Create a structure variable of myStructure called **s1**  
  struct myStructure s1;  
  
  // Assign values to members of s1  
  s1.myNum = 13;  
  s1.myLetter = 'B';  
  
  // Print values  
  printf("My number: %d\n", s1.myNum);  
  printf("My letter: %c\n", s1.myLetter);  
  
  return 0;  
}
```
### What About Strings in Structures?
there is a solution for this! You can use the `strcpy()` function and assign the value to `s1.myString`, like this:
```C
struct myStructure {  
  int myNum;  
  char myLetter;  
  char myString[30]; // String  
};  
  
int main() {  
  struct myStructure s1;  
  
  // Assign a value to the string using the strcpy function  
  strcpy(s1.myString, "Some text");  
  
  // Print the value  
  printf("My string: %s", s1.myString);  
  
  return 0;  
}
```
### Simpler Syntax
You can also assign values to members of a structure variable at declaration time, in a single line.

Just insert the values in a comma-separated list inside curly braces `{}`. Note that you don't have to use the `strcpy()` function for string values with this technique:
```C
// Create a structure  
struct myStructure {  
  int myNum;  
  char myLetter;  
  char myString[30];  
};  
  
int main() {  
  // Create a structure variable and assign values to it  
  struct myStructure s1 = {13, 'B', "Some text"};  
  
  // Print values  
  printf("%d %c %s", s1.myNum, s1.myLetter, s1.myString);  
  
  return 0;  
}
```