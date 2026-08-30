# 2D Array
A 2D array is also known as a matrix (a table of rows and columns). To create a 2D array of integers, take a look at the following example:
```C
int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };
```
To access an element of a two-dimensional array, you must specify the index number of both the row and column. This statement accesses the value of the element in the **first row (0)** and **third column (2)** of the **matrix** array.
```C
int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };  
  
printf("%d", matrix[0][2]);
```
To change the value of an element, refer to the index number of the element in each of the dimensions:  
```C
int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };  
matrix[0][0] = 9;  
  
printf("%d", matrix[0][0]);
```
To loop through a multi-dimensional array, you need one loop for each of the array's dimensions. The following example outputs all elements in the **matrix** array:
```C
int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };  
  
int i, j;  
for (i = 0; i < 2; i++) {  
  for (j = 0; j < 3; j++) {  
    printf("%d\n", matrix[i][j]);  
  }  
}
```
