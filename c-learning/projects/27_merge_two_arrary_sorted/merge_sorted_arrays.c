/*

Project 027: Merge Two Sorted Arrays

*/

#include <stdio.h>
#include <stdbool.h>

void merge_array(int *arr_merged, int *arr1, int size_arr1, int *arr2, int size_arr2);

int main() {

    int size_arr1, size_arr2;

    printf("*** Merge Two Sorted Arrays ***\n");

    printf("Please Enter Size of Arr1 (1-100): ");
    if (scanf("%d", &size_arr1) != 1 || size_arr1 < 1 || size_arr1 > 100)
    {
        printf("Error: Invalid Input\n");
        return 1;
    }
    printf("Please Enter Size of Arr2 (1-100): ");
    if (scanf("%d", &size_arr2) != 1 || size_arr2 < 1 || size_arr2 > 100)
    {
        printf("Error: Invalid Input\n");
        return 1;
    }
    
    int arr1[size_arr1], arr2[size_arr2];

    printf("Input Value of Array 1\n");
    for (int i = 0; i < size_arr1; i++)
    {
        printf("Enter Index(%d) for arr1: ", i);
        if (scanf("%d", &arr1[i]) != 1)
        {
            printf("Error: Invalid Input\n");
            return 1;
        }
        
    }
    printf("Input Value of Array 2\n");
    for (int i = 0; i < size_arr2; i++)
    {
        printf("Enter Index(%d) for arr1: ", i);
        if (scanf("%d", &arr2[i]) != 1)
        {
            printf("Error: Invalid Input\n");
            return 1;
        }
        
    }

    int arr_merged[size_arr1+size_arr2];
    
    merge_array(arr_merged, arr1, size_arr1, arr2, size_arr2);

    printf("The array Merged of Arr_1 and Arr_2: \n");
    for (int i = 0; i < size_arr1+size_arr2; i++)
    {
        printf("index(%d): %d\n", i, arr_merged[i]);
    }
    

    return 0;
}

void merge_array(int *arr_merged, int *arr1, int size_arr1, int *arr2, int size_arr2) {

    int i = 0, j = 0, k = 0;

    while (i < size_arr1 && j < size_arr2) {
        if (arr1[i] < arr2[j])
            arr_merged[k++] = arr1[i++];
        else
            arr_merged[k++] = arr2[j++];
    }

    while (i < size_arr1)
        arr_merged[k++] = arr1[i++];
    
    while (j < size_arr2)
        arr_merged[k++] = arr2[j++];

}
