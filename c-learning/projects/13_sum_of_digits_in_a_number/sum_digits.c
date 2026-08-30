#include <stdio.h>

int main() {

    int value, sign = 1, sum = 0;

    printf("*** Sum Digit of a Number ***\n");
    printf("Enter a Number: ");

    if (scanf("%d", &value) != 1) {
        printf("Error: Invalid Input\n");
        return 1;
    }

    if (value < 0) {
        sign = -1;
        value = -value;
    }

    while (value > 0)
    {
        sum += value % 10;
        value /= 10;
    }
    
    printf("Sum is: %d", sign*sum);
    
    return 0;
}
