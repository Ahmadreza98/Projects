#include <stdio.h>

int main() {

    int base = 0, exponent = 0, temp = 1;

    printf("*** Power ***\n");
    printf("Enter a Base Number: ");
    scanf("%d", &base);
    printf("Enter a Exponent Number: ");
    scanf("%d", &exponent);

    for (int i = 0; i < exponent; i++)
    {
        temp *= base;
    }
    printf("The %d power of %d is: %d", base, exponent, temp);

    return 0;
}
