# For Loop
the `for` loop is a control flow statement that is used to repeatedly execute a block of code as many times as instructed. It uses a variable (loop variable) whose value is used to decide the number of repetitions. It is commonly used to iterate over a sequence such as an array or list.
```C
for (size_t i = 0; i < count; i++)

    {

        /* code */

    }
```
**For Example:**
```C
#include <stdio.h>

int main() {

    for (int i = 100; i > 0; i--) {

        if (i % 2 == 0) {

            printf("%d\n", i);
         }
     }

    return 0;
}
```
