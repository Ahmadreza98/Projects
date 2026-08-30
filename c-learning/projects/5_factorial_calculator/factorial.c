#include <stdio.h>

int main() {

    int result = 1, temp = 0;

    printf("*** Calculate Factorial ***\n");
    printf("Enter Your Number: ");
    if (scanf("%d", &temp) != 1)
    {
        printf("Error: Invalid input\n");
        return 1;
    }
    if (temp < 0)
    {
        printf("Error: Invalid input\n");
        return 1;
    }
    
    for (int i = 1; i <= temp; i++)
    {
        result *=i;
    }
    printf("The %d FACTS is: %d", temp, result);

    return 0;
}
