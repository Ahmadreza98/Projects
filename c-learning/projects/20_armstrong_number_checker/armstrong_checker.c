#include <stdio.h>

int main() {
    int num, originalNum,reminder, result = 0, count = 0, power = 1;

    printf("*** Armstrong Number Checker ***\n");
    printf("Enter a number: ");

    if (scanf("%d", &num) != 1) {
        printf("Error: Invalid input\n");
        return 1;
    }

    if (num < 0) num = -num;

    originalNum = num;

    while (originalNum != 0)
    {
        originalNum /=10;
        count++;
    }

    originalNum = num;

    while (originalNum != 0) {

        reminder = originalNum%10;

        for (int i = 0; i < count; i++)
        {
            power *= reminder;
        }

        result += power;
        originalNum/=10;
        power = 1;
    }

    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    return 0;
}
