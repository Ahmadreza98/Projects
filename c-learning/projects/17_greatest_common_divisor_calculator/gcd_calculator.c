#include <stdio.h>

int main() {
    int num1, num2, temp;

    printf("*** Find GCD (Greatest Common Divisor) ***\n");
    printf("Enter first number: ");

    if (scanf("%d", &num1) != 1) {
        printf("Error: Invalid input\n");
        return 1;
    }

    printf("Enter second number: ");
    if (scanf("%d", &num2) != 1) {
        printf("Error: Invalid input\n");
        return 1;
    }

    if (num1 < 0) num1 = -num1;
    if (num2 < 0) num2 = -num2;

    if (num1 == 0 && num2 == 0) {
        printf("GCD is undefined for both numbers zero.\n");
        return 0;
    }

    while (num2 != 0) {
        temp = num1 % num2;
        num1 = num2;
        num2 = temp;
    }

    printf("The GCD is: %d\n", num1);
    return 0;
}
