#include <stdio.h>

int main() {

    int num = 0, temp = 0;

    printf("*** SUM NUMBER ***\n");
    printf("Enter a Number: ");
    if (scanf("%d", &num) != 1)
    {
        printf("Error: Invalid input\n");
        return 1;
    }else if (num < 0)
    {
        printf("Error: Number is not Negative.\n");
        return 1;
    }
    
    for (int i = 1; i <= num; i++)
    {
        temp += i;
    }
    printf("The Sum numbers of 1 to %d is: %d", num, temp);

    return 0;
}
