#include <stdio.h>
#include <stdbool.h>

void bubble_sort_ascending(int arr[], int size);
void bubble_sort_descending(int arr[], int size);
void swap(int *xp, int *yp);

int main() {

    printf("*** Array Sorting (Ascending & Descending) ***\n");

    int inp, value;

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

    printf("Array Before Sort: ");

    for (int i = 0; i < inp; i++)
    {
        printf("%d, ", arr_numbers[i]);
    }
    
    int op;

    printf("\n1.Sort Ascending\n2.Sort Descending\nEnter Type Sorting (1-2): ");
    if (scanf("%d", &op) != 1)
    {
        printf("Error: Invalid Input\n");
        return 1;
    }
    
    switch (op)
    {
    case 1:
        bubble_sort_ascending(arr_numbers, inp);
        break;
    
    case 2:
        bubble_sort_descending(arr_numbers, inp);
        break;
    default:
        printf("Error: Input Known.");
        break;
    }

    return 0;
}

void bubble_sort_ascending(int arr[], int size) {

    bool swapped;

    for (int i = 0; i < size-1; i++)
    {
        swapped = false;
        for (int j = 0; j < size-1-i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
            
        }

        if (swapped == false)
        {
            break;
        }
    }

    printf("\nArray After Sort (ascending): ");

    for (int i = 0; i < size; i++)
    {
        printf("%d, ", arr[i]);
    }

}

void bubble_sort_descending(int arr[], int size) {

    bool swapped;

    for (int i = 0; i < size-1; i++)
    {
        swapped = false;
        for (int j = 0; j < size-1-i; j++)
        {
            if (arr[j] < arr[j+1])
            {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
            
        }

        if (swapped == false)
        {
            break;
        }
    }

    printf("\nArray After Sort (descending): ");

    for (int i = 0; i < size; i++)
    {
        printf("%d, ", arr[i]);
    }

}

void swap(int *xp, int *yp) {

    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
