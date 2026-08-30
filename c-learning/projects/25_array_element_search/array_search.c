#include <stdio.h>


int main() {

    printf("*** Search an Element in Array (Linear & Binary Search) ***\n");

    int inp, value, element;

    printf("How Many Want You Input Numbers (1 ~ 100): ");
    if (scanf("%d", &inp) != 1 || inp <= 0 || inp > 100)
    {
        printf("Error: Invalid Input\n");
        return 1;
    }
    
    int arr_numbers[inp];

    for (int i = 0; i < inp; i++)
    {
        printf("Number (%d): ", i+1);
        if (scanf("%d", &value) != 1)
        {
            printf("Error: Invalid Input\n");
            return 1;
        }
        arr_numbers[i] = value;
    }

    printf("Enter Element Value For Search: ");
    if (scanf("%d", &element) != 1)
    {
        printf("Error: Invalid Input\n");
        return 1;
    }
        
    for (int i = 0; i < inp; i++)
    {
        if (element == arr_numbers[i])
        {
            printf("The Element Found. Index of Element is : %d\n", i);
            break;
        } else if (element != arr_numbers[i] && i == inp - 1)
        {
            printf("The Element is NOT Found.\n");
            break;
        }
    }
    
    return 0;
}
