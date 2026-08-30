#include <stdio.h>

int main() {

    int value;

    printf("ODD or EVEN!\n");
    printf("Enter your number: ");
    scanf("%d", &value);

    printf("%s", (value % 2 == 0) ? "even":"odd");

    return 0;
}
