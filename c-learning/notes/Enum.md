# Enum
An **enum** is a special type that represents a group of constants (unchangeable values). To create an enum, use the `enum` keyword, followed by the name of the enum, and separate the enum items with a comma:
```C
enum Level {  
  LOW,  
  MEDIUM,  
  HIGH  
};
```
By default, the first item (`LOW`) has the value `0`, the second (`MEDIUM`) has the value `1`, etc. If you now try to print myVar, it will output `1`, which represents `MEDIUM`:
```C
int main() {  
  // Create an enum variable and assign a value to it  
  enum Level myVar = MEDIUM;  
  
  // Print the enum variable  
  printf("%d", myVar);  
  
  return 0;  
}
```
### Change Values
As you know, the first item of an enum has the value 0. The second has the value 1, and so on. To make more sense of the values, you can easily change them:
```C
enum Level {  
  LOW = 25,  
  MEDIUM = 50,  
  HIGH = 75  
};

printf("%d", myVar); // Now outputs 50
```
### typedef with enum
You can also use `typedef` with `enum`. This makes it easier to declare variables of the enum type, without having to write `enum` every time:
```C
// Without typedef  
enum Day {MON, TUE, WED, THU, FRI, SAT, SUN};  
enum Day today = WED;  
  
// With typedef  
typedef enum {MON, TUE, WED, THU, FRI, SAT, SUN} Day;  
Day today = WED;
```
Both versions work the same, but the `typedef` version is shorter and easier to read:
```C
#include <stdio.h>  
  
typedef enum {MON, TUE, WED, THU, FRI, SAT, SUN} Day;  
  
int main() {  
  Day today = WED;  
  if (today == WED) {  
    printf("It is Wednesday!\n");  
  }  
  return 0;  
}
```