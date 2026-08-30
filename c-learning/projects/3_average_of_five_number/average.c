#include <stdio.h>

int main() {

    float result = 0, temp = 0;

    printf("*** Average Five Number ***\n");
    for (int i = 1; i <= 5; i++)
    {
        printf("Enter Number %d: ",i);
        if (scanf("%f", &temp) != 1)
        {
            printf("Error: Invalid input\n");
            return 1;
        }

        result +=temp;
        
    }
    printf("The Average Five number is: %.2f", result/5);

    return 0;
}
