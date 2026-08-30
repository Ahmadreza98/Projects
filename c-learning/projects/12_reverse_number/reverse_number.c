#include <stdio.h>

int main() {
    int value, reverse = 0, sign = 1;

    printf("*** Reverse a Number ***\n");
    printf("Enter a Number: ");

    if (scanf("%d", &value) != 1) {
        printf("Error: Invalid Input\n");
        return 1;
    }

    if (value < 0) {
        sign = -1;
        value = -value;
    }

    while (value > 0) {
        reverse = reverse * 10 + (value % 10);
        value /= 10;
    }

    printf("The Reverse Number is: %d\n", reverse * sign);
    return 0;
}
