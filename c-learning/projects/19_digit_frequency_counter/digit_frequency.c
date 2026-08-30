#include <stdio.h>

int main() {
    int num, digit, count = 0;

    printf("*** Count Frequency of a Digit ***\n");
    printf("Enter a number: ");

    if (scanf("%d", &num) != 1) {
        printf("Error: Invalid input\n");
        return 1;
    }

    printf("Enter a digit (0-9): ");
    if (scanf("%d", &digit) != 1 || digit < 0 || digit > 9) {
        printf("Error: Invalid digit\n");
        return 1;
    }

    if (num < 0) num = -num;

    if (num == 0 && digit == 0) {
        count = 1;
    }

    while (num > 0) {
        if (num % 10 == digit) {
            count++;
        }
        num /= 10;
    }

    printf("Count Frequency of %d is: %d\n", digit, count);
    return 0;
}
