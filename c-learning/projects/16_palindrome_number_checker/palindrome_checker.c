#include <stdio.h>

int main() {
    
    int temp1, temp2 = 0, inp_value;

    printf("*** Palindrome number Check ***\n");
    printf("Enter a Number: ");
    if (scanf("%d", &inp_value) != 1)
    {
        printf("Error: Invalid Input\n");
        return 1;
    }

    if (inp_value < 0)
    {;
        inp_value *= -1;
    }
    

    temp1 = inp_value;

    while (temp1 > 0)
    {
        temp2 = temp2 * 10 + temp1%10;
        temp1= temp1/10;
    }

    if (temp2 == inp_value)
    {
        printf("The Number is Palindrome.\n");
    } else if (temp2 != inp_value)
    {
        printf("The Number is NOT Palindrome.\n");
    }else {
        printf("Error: I Can't to identify.\n");
    }
    
    return 0;
}
