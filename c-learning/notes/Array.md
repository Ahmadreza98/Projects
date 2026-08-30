# Array
Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value. 

To create an array, define the data type (like `int`) and specify the name of the array followed by **square brackets []**.
```C
int myNumbers[] = {25, 50, 75, 100};
```
To access an array element, refer to its **index number**. Array indexes start with **0**: [0] is the first element. [1] is the second element, etc.
```C
int myNumbers[] = {25, 50, 75, 100};  
printf("%d", myNumbers[0]);
```
To change the value of a specific element, refer to the index number:
```C
int myNumbers[] = {25, 50, 75, 100};  
myNumbers[0] = 33;  
printf("%d", myNumbers[0]);
```
Another common way to create arrays, is to specify the size of the array, and add elements later:
```C
// Declare an array of four integers:  
int myNumbers[4];  
  
// Add elements  
myNumbers[0] = 25;  
myNumbers[1] = 50;  
myNumbers[2] = 75;  
myNumbers[3] = 100;
```
**NOTE:** It is important to note that all elements in an array **must be of the same data type**.