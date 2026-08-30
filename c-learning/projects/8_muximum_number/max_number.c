#include <stdio.h>

int main() {

    int num = 0, temp = 0, i = 0;

    printf("*** Maximum Number ***\n");
    
    do
    {
        printf("Enter a Number: ");
        if (scanf("%d",&num) != 1)
        {
            printf("Error: Invalid Input\n");
            return 1;
        }
        if (i > 0)
        {
            if (num > temp)
            {
                temp = num;
            }
            
        }else {
            temp = num;
        }
        i++;
    } while (i < 3);
    
    
    printf("Maximum number is: %d", temp);

    return 0;
}
