#include <stdio.h>

int main() {

    int value = 0;
    int count = 0;
    printf("*** Count Digit of Number ***\n");
    printf("Enter a Number: ");
    if (scanf("%d", &value) != 1)
    {
        printf("Error: Invalid Input\n");
        return 1;
    } else if (value < 0)
    {
        value *= -1;
    }
    while (1)
    {
        if (value >= 10)
        {
            count++;
            value = value / 10;
        }else {
            count++;
            break;
        }
        
    }
    printf("Count Digit of Number is: %d", count);


    return 0;
}
