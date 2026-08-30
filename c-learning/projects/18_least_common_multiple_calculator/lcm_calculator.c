#include <stdio.h>

int main() {
    int num1, num2, temp;
    int val_1, val_2;
    printf("*** Find LCM (Least Common Multiple) ***\n");
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
    val_1 = num1;
    val_2 = num2;
    while (num2 != 0) {
        temp = num1 % num2;
        num1 = num2;
        num2 = temp;
    }

    printf("The LCM is: %d\n", (val_1*val_2)/num1);
    return 0;
}
