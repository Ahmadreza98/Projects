#include <stdio.h>

int main() {

    int number[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    // print a cell on number array
    printf("%d\n", number[0][0]);

    // print all cells on numbers
    for (int i = 0; i < 3; i++)
    {
        for (int k = 0; k < 3; k++)
        {
            printf("%d\t", number[i][k]);
        }
        printf("\n");
    }
    

    return 0;
}