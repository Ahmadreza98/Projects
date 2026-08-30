#include <stdio.h>

int main() {

    int number;
    printf("*** Multiple Table ***\n");
    printf("Enter a Number: ");
    if (scanf("%d", &number) != 1)
        {
            printf("Error: Invalid input\n");
            return 1;
        }
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", i*number);
    }
    return 0;
}
