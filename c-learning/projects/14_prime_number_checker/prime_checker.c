#include <stdio.h>

int main() {
    int value;
    int isPrime = 1;

    printf("*** Prime Number Checker ***\n");
    printf("Enter a Number: ");

    if (scanf("%d", &value) != 1 || value <= 1) {
        printf("Error: Invalid Input\n");
        return 1;
    }

    for (int i = 2; i * i <= value; i++) {
        if (value % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime) {
        printf("The number %d is Prime.\n", value);
    } else {
        printf("The number %d is NOT Prime.\n", value);
    }

    return 0;
}
