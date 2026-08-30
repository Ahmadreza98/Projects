/*

    Project 26: Binary Search in Sorted Array

*/

#include <stdio.h>
#include <stdbool.h>

void sort_array_ascending(int *arr, int size);
void swap(int *xp, int *yp);
int binarySearch(int *arr, int size, int value);

int main() {

    int inp, value;

    printf("*** Binary Search in Sorted Array ***\n");
    printf("How Many Set The Input Value (1-100): ");
    if (scanf("%d", &inp) != 1 || inp < 0 || inp > 100)
    {
        printf("Error: Invalid Input\n");
        return 1;
    }
    
    int arr_number[inp];

    for (int i = 0; i < inp; i++)
    {
        printf("Input Number(%d): ", i+1);
        if (scanf("%d", &arr_number[i]) != 1)
        {
            printf("Error: Invalid Input\n");
            return 1;
        }
        
    }
    
    printf("Enter a Value for Search in Array: ");
    if (scanf("%d", &value) !=1)
    {
        printf("Error: Invalid Input\n");
        return 1;
    }
    

    sort_array_ascending(arr_number, inp);
    int result = binarySearch(arr_number, inp, value);

    if(result == -1) {
        printf("Element is not present in array");
    } else {
        printf("Element is present at index %d",result);   
    }
    

    return 0;
}

void sort_array_ascending(int *arr, int size) {

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
}

void swap(int *xp, int *yp) {

    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int binarySearch(int *arr, int size, int value) {

    int low = 0;
    int high = size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == value) {

            return mid;

        } else if (arr[mid] < value) {

            low = mid + 1;

        } else {

            high = mid - 1;

        }
    }

    return -1;
}
