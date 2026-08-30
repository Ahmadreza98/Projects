#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    
    printf("*** Simple Number Guessing Game ***\n");
    int guess_number_pc, guess_number_client;

    srand(time(NULL));
    guess_number_pc = rand() % 100;

    do
    {
        printf("Enter guess number: ");
        if (scanf("%d", &guess_number_client) != 1)
        {
            printf("Error: Invalid Input\n");
            return 1;
        }
        
        if (guess_number_pc > guess_number_client)
        {
            printf("HIGHER\n");

        } else if (guess_number_pc < guess_number_client)
        {
            printf("LOWER\n");
        } else if (guess_number_pc == guess_number_client)
        {
            printf("Congratulation, YOU WIN\n");
            break;
        }
        
    } while (1);

    return 0;
}
