# Ternary Operators
The conditional operator (`?:`) is a shorthand way of writing simple `if-else` statement. It evaluates a condition and returns one of two expressions based on whether the condition is true or false.
- Reduces code length by replacing simple `if-else` statements with a single expression.
- Improves code readability when performing straightforward conditional assignments.
```C
#include <stdio.h>

int main() {
    int a = 10, b = 20;

    int max = (a > b) ? a : b;

    printf("Maximum = %d", max);

    return 0;
}
```
#### Syntax:
The conditional operator can be in the form
> `variable = Expression1 ? Expression2 : Expression3;`

Or the syntax can also be in this form
> `variable = (condition) ? Expression2 : Expression3;`

Or syntax can also be in this form
> `(condition) ? (variable = Expression2) : (variable = Expression3);`
```C
#include <stdio.h>

int main()
{
    int m = 5, n = 4;

    (m > n) ? printf("m is greater than n that is %d > %d",m, n)
            : printf("n is greater than m that is %d > %d",n, m);

    return 0;
}
```
