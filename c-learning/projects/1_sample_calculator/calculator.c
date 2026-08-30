#include <stdio.h>

void calculator(float num1, float num2, char op);

int main() {

    float num1, num2;
    char op;

    printf("*** Sample Calculator ***\n");
    printf("Enter Number 1: ");
    scanf("%f", &num1);
    printf("Enter Number 2: ");
    scanf("%f", &num2);
    printf("Enter your operation (+ - * /): ");
    scanf(" %c", &op);

    calculator(num1, num2, op);

    return 0;
}

void calculator(float num1, float num2, char op) {
    switch (op)
    {
    case '+':
        printf("The Num1 + Num2 is: %.2f",(num1+num2));
        break;
    case '-':
        printf("The Num1 - Num2 is: %.2f",(num1-num2));
        break;
    case '*':
        printf("The Num1 * Num2 is: %.2f",(num1*num2));
        break;
    case '/':   
        if (num2 == 0)
        {
           printf("Error: Division by zero");
           break; 
        } else {
            printf("The Num1 / Num2 is: %.2f",(num1/num2));
            break;
        }
    default:
        printf("Error: Please selected of (+ - * /).");
        break;
    }
}
