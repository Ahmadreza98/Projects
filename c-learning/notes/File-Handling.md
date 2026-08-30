# File Handling
File handling in C is the process in which we create, open, read, write, and close operations on a file. C language provides different functions such as **fopen()**, **fwrite()**, **fread()**, **fseek()**, **fprintf()**, etc. to perform input, output, and many different C file operations in our program.
### **Open a File in C**

For opening a file in C, the **fopen()** function is used with the filename or file path along with the required **access modes**.
```C
#include <stdio.h>
#include <stdlib.h>

int main() {
    
    // File pointer to store the 
    // value returned by fopen
    FILE* fptr;

    // Opening the file in read mode
    fptr = fopen("filename.txt", "r");

    // checking if the file is 
    // opened successfully
    if (fptr == NULL) {
        printf("The file is not opened.");
    }
    return 0;
}
```
The file is not opened because it does not exist in the source directory. But the **fopen()** function is also capable of creating a file if it does not exist.
**Note:** It is essential to check for NULL values that might be returned by the **fopen()** function to avoid any errors.

##### Syntax of **fopen()**:

`FILE* fopen(*file_name, *access_mode);`

##### **Parameters**:
- **file_name:** name of the file when present in the same directory as the source file. Otherwise, full path.
- **access_mode**: Specifies for what operation the file is being opened.
##### **Return Value**:
- If the file is opened successfully, returns a file pointer to it.
- If the file is not opened, then returns NULL.
#### File Opening Modes
File opening modes or access modes specify the allowed operations on the file to be opened. They are passed as an argument to the **fopen()** function. Some of the commonly used file access modes are listed below:

| Opening Modes | Description                                                                                                                                                                                                                                                                                      |
| :-----------: | :----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|      `r`      | Searches file. If the file is opened successfully `fopen()` loads it into memory and sets up a pointer that points to the first character in it. If the file cannot be opened, `fopen()` returns `NULL`.                                                                                         |
|     `rb`      | Open for reading in binary mode. If the file does not exist, `fopen()` returns `NULL`.                                                                                                                                                                                                           |
|      `w`      | Open for writing in text mode. If the file exists, its contents are overwritten. If the file doesn't exist, a new file is created. Returns `NULL` if unable to open the file.                                                                                                                    |
|     `wb`      | Open for writing in binary mode. If the file exists, its contents are overwritten. If the file does not exist, it will be created.                                                                                                                                                               |
|      `a`      | Searches file. If the file is opened successfully `fopen()` loads it into memory and sets up a pointer that points to the last character in it. It opens only in append mode. If the file doesn't exist, a new file is created. Returns `NULL` if unable to open the file.                       |
|     `ab`      | Open for append in binary mode. Data is added to the end of the file. If the file does not exist, it will be created.                                                                                                                                                                            |
|     `r+`      | Searches file. If it is opened successfully, `fopen()` loads it into memory and sets up a pointer that points to the first character in it. Returns `NULL` if unable to open the file.                                                                                                           |
|     `rb+`     | Open for both reading and writing in binary mode. If the file does not exist, `fopen()` returns `NULL`.                                                                                                                                                                                          |
|     `w+`      | Searches file. If the file exists, its contents are overwritten. If the file doesn't exist, a new file is created. Returns `NULL` if unable to open the file.                                                                                                                                    |
|     `wb+`     | Open for both reading and writing in binary mode. If the file exists, its contents are overwritten. If the file does not exist, it will be created.                                                                                                                                              |
|     `a+`      | Searches file. If the file is opened successfully, `fopen()` loads it into memory and sets up a pointer that points to the last character in it. It opens the file in both reading and append mode. If the file doesn't exist, a new file is created. Returns `NULL` if unable to open the file. |
|     `ab+`     | Open for both reading and appending in binary mode. If the file does not exist, it will be created.                                                                                                                                                                                              |
As given above, if you want to perform operations on a binary file, then you have to append 'b' at the last. For example, instead of “w”, you have to use “wb”, instead of “a+” you have to use “a+b”.
### Create a File
The fopen() function can not only open a file but also can create a file if it does not exist already. For that, we have to use the modes that allow the creation of a file if not found such as ****w, w+, wb, wb+, a, a+, ab, and ab+****.
```C
#include <stdio.h>
#include <stdlib.h>

int main() {
    
    // File pointer
    FILE* fptr;

    // Creating file using fopen()
    // with access mode "w"
    fptr = fopen("file.txt", "w");

    // checking if the file is created
    if (fptr == NULL) 
        printf("The file is not opened.");
    else 
        printf("The file is created Successfully.");
    return 0;
}
```
### Write to a File
The file write operations can be performed by the functions fprintf() and fputs(). C programming also provides some other functions that can be used to write data to a file such as:

| **Function** | **Description**                                                                                                     |
| :----------: | ------------------------------------------------------------------------------------------------------------------- |
| `fprintf()`  | Similar to `printf()`, this function uses formatted string and variable arguments list to print output to the file. |
|  `fputs()`   | Prints the whole line in the file and a newline at the end.                                                         |
|  `fputc()`   | Prints a single character into the file.                                                                            |
|  `fputw()`   | Prints a number to the file.                                                                                        |
|  `fwrite()`  | This function writes the specified number of bytes to the binary file.                                              |
```C
#include <stdio.h>
#include <stdlib.h>

int main() {
    
    // File pointer
    FILE* fptr;

    // Get the data to be written in file
    char data[50] = "GeeksforGeeks-A Computer "
                    "Science Portal for Geeks";

    // Creating file using fopen()
    // with access mode "w"
    fptr = fopen("file.txt", "w");

    // Checking if the file is created
    if (fptr == NULL) 
        printf("The file is not opened.");
    else{
        printf("The file is now opened.\n");
        fputs(data, fptr);
        fputs("\n", fptr);

        // Closing the file using fclose()
        fclose(fptr);
        printf("Data successfully written in file "
               "file.txt\n");
        printf("The file is now closed.");
    }
    return 0;
}
```
### Reading From a File
The file read operation in C can be performed using functions **fscanf()** or **fgets()**. Both the functions performed the same operations as that of **scanf()** and gets but with an additional parameter, the file pointer. There are also other functions we can use to read from a file. Such functions are listed below:

| **Function** | **Description**                                                             |
| :----------: | --------------------------------------------------------------------------- |
|   fscanf()   | Use formatted string and variable arguments list to take input from a file. |
|   fgets()    | Input the whole line from the file.                                         |
|   fgetc()    | Reads a single character from the file.                                     |
|   fgetw()    | Reads a number from a file.                                                 |
|   fread()    | Reads the specified bytes of data from a binary file.                       |
```C
#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fptr;

    // Declare the character array
    // for the data to be read from file
    char data[50];
    fptr = fopen("file.txt", "r");

    if (fptr == NULL)
    {
        printf("file.txt file failed to open.");
    }
    else
    {

        printf("The file is now opened.\n");

        // Read the data from the file
        // using fgets() method
        while (fgets(data, 50, fptr) != NULL)
        {

            // Print the data
            printf("%s", data);
        }

        // Closing the file using fclose()
        fclose(fptr);
    }
    return 0;
}
```
The **getc()** and some other file reading functions return **EOF** (**E**nd **O**f **F**ile) when they reach the end of the file while reading. EOF indicates the end of the file, and its value is implementation-defined. Reading more after EOF results in undefined error so, it is always recommended to check for EOF while reading a file.

**Note:** One thing to note here is that after reading a particular part of the file, the file pointer will be automatically moved to the end of the last read character.
### Closing a File
The **fclose()** function is used to close the file. After successful file operations, you must always close a file to remove it from the memory.
##### **Syntax:**
`fclose(file_pointer);`
### Move File Pointer
File pointer generally points to the position according to the mode or last read/write operation. We can manually move this pointer to any position in the file using **fseek()** function.
##### **Syntax:**
`fseek(fptr, offset, pos);`

where, **pos** is the position from where offset is counted and **offset** is the number of positions to shift from pos (it can be negative or positive).

**Example:**
While writing to a file opened in **rw+** mode, the file pointer moves to the end of the file. In case where we want to replace a word, then first we have to move the file pointer to the position where that word starts.
```C
#include <stdio.h>
#include <stdlib.h>

int main() {
    
    // File pointer
    FILE* fptr;

    // Get the data to be written in file
    char data[50] = "GeeksforGeeks-A Computer "
                    "Science Portal for Geeks";

    // Creating file using fopen()
    // with access mode "w"
    fptr = fopen("file.txt", "w");

    // Checking if the file is created
    if (fptr == NULL) 
        printf("The file is not opened.");
    else{
        printf("The file is now opened.\n");
        fputs(data, fptr);
        fputs("\n", fptr);
        fseek(fptr, -6, SEEK_END);
        
        fputs("GeeksforGeeks", fptr);

        // Closing the file using fclose()
        fclose(fptr);
        printf("Data successfully written in file "
               "file.txt\n");
        printf("The file is now closed.");
    }
    return 0;
}
```
