/*

    Project 030: Counting Occurrences of Elements in Array

*/

#include <stdio.h>

int main() {

    int inp, target, counter = 0;

    printf("*** Counting Occurrences of Elements in Array ***\n");
    printf("How many want ot enter of value: ");
    if (scanf("%d", &inp) != 1)
    {
        printf("Invalid Input\n");
        return 1;
    }

    int arr[inp];

    for (int i = 0; i < inp; i++)
    {
        printf("Index(%d): ", i);
        if (scanf("%d", &arr[i]) != 1)
        {
            printf("Invalid Input\n");
            return 1;
        }
        
    }

    printf("Enter a target value: ");
    if (scanf("%d", &target) != 1)
    {
        printf("Invalid Input\n");
        return 1;
    }
    
    for (int i = 0; i < inp; i++)
    {
        if (arr[i] == target)
        {
            counter++;
        }
        
    }
    
    if (counter == 0) printf("The target is not founded.");
    else printf("The target is founded. counting of value is %d.", counter);
    

    return 0;
}
