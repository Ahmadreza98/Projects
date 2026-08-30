#include <stdio.h>

int main() {
    
    int t1 = 0, t2 = 1, temp, N;

    printf("*** Fibonacci Series ***\n");
    printf("Enter a Number of Fibonacci Series: ");
    if (scanf("%d", &N) != 1 || N < 0)
    {
        printf("Error: Invalid Input\n");
        return 1;
    }

    printf("Index 1: %d\n", t1);
    printf("Index 2: %d\n", t2);

    for (int i = 0; i < N-2; i++)
    {
        temp = t1 + t2;
        t1 = t2;
        t2 = temp;
        printf("Index %d: %d\n", i+3, temp);
    }
    
    return 0;
}
