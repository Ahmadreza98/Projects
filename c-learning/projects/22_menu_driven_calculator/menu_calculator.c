#include <stdio.h>

float sum(float num1, float num2);
float minus(float num1, float num2);
float multiple(float num1, float num2);
float divide(float num1, float num2);

int main() {
    
    printf("*** Menu Driven Calculator ***\n");
    float num1 = 0, num2 = 0;
    int op;

    do
    {
        printf("1.Sum Operation (+)\n2.Minus Operation (-)\n3.Multiplier Operation (x)\n4.Divide Operation (/)\n5.Exit\n");
        printf("Choose a Number of Operation: ");
        if (scanf("%d", &op) != 1)
        {
            printf("Error: Invalid Input\n");
            return 1;
        }

        switch (op)
        {
        case 1:
            printf("Enter The First Number: ");
            if (scanf(" %f", &num1) != 1)
            {
                printf("Error: Invalid Input\n");
            return 1;
            }

            printf("Enter The Second Number: ");
            if (scanf(" %f", &num2) != 1)
            {
                printf("Error: Invalid Input\n");
            return 1;
            }
            
            printf("Result Sum %.2f + %.2f equal to: %.2f\n", num1,num2,sum(num1, num2));
            printf("-------------------------------------------\n");
            break;
        
        case 2:
            printf("Enter The First Number: ");
            if (scanf(" %f", &num1) != 1)
            {
                printf("Error: Invalid Input\n");
            return 1;
            }

            printf("Enter The Second Number: ");
            if (scanf(" %f", &num2) != 1)
            {
                printf("Error: Invalid Input\n");
            return 1;
            }
            
            printf("Result Minus %.2f - %.2f equal to: %.2f\n", num1,num2,minus(num1, num2));
            printf("-------------------------------------------\n");
            break;
        
        case 3:
            printf("Enter The First Number: ");
            if (scanf(" %f", &num1) != 1)
            {
                printf("Error: Invalid Input\n");
            return 1;
            }

            printf("Enter The Second Number: ");
            if (scanf(" %f", &num2) != 1)
            {
                printf("Error: Invalid Input\n");
            return 1;
            }
            
            printf("Result Multiple %.2f x %.2f equal to: %.2f\n", num1,num2,multiple(num1, num2));
            printf("-------------------------------------------\n");
            break;

        case 4:
            printf("Enter The First Number: ");
            if (scanf(" %f", &num1) != 1)
            {
                printf("Error: Invalid Input\n");
            return 1;
            }

            printf("Enter The Second Number: ");
            if (scanf(" %f", &num2) != 1)
            {
                printf("Error: Invalid Input\n");
            return 1;
            }
            
            if (num2 == 0)
            {
                printf("Error: Divide by Zero.\n");
                printf("-------------------------------------------\n");
                break;
            }

            printf("Result div %.2f / %.2f equal to: %.2f\n", num1,num2,divide(num1, num2));
            printf("-------------------------------------------\n");
            break;
        case 5:
            break;
        default:
            break;
        }
    
    if (op == 5)
    {
        break;
    }
    } while (1);

    return 0;
}


float sum(float num1, float num2) {
    return (num1+num2);
}

float minus(float num1, float num2) {
    return (num1-num2);
}

float multiple(float num1, float num2) {
    return (num1*num2);
}

float divide(float num1, float num2) {  
    return (num1/num2);
}
