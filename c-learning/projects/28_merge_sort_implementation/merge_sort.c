/*

    Project 28: Merge Sort Implementation

*/

#include <stdio.h>

void mergeSort(int *arr, int ls, int rs);
void merge(int *arr, int ls, int mid, int rs);

int main() {

    int inp, val;

    printf("*** Merge Sort Implementation ***\n");
    printf("How Many Want to Enter Value (1-100): ");
    if (scanf("%d", &inp) != 1 || inp < 1 || inp > 100)
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
    
    printf("Array Before Sorted: [");
    for (int i = 0; i < inp; i++)
    {
        if (i == inp - 1) printf("%d] ", arr[i]);
        else printf("%d, ", arr[i]);
    }
    
    mergeSort(arr, 0, inp - 1);

    printf("\nArray After Sorted: [");
    for (int i = 0; i < inp; i++)
    {
        if (i == inp - 1) printf("%d] ", arr[i]);
        else printf("%d, ", arr[i]);
    }

    return 0;
}

void mergeSort(int *arr, int ls, int rs){
    
    if (ls < rs) {
        int mid = ls + (rs - ls) / 2;

        mergeSort(arr, ls, mid);
        mergeSort(arr, mid + 1, rs);

        merge(arr, ls, mid, rs);
    }
}

void merge(int *arr, int ls, int mid, int rs){
    
    int i, j, k;
    int n1 = mid - ls + 1;
    int n2 = rs - mid;

    int arr_ls[n1], arr_rs[n2];

    for (i = 0; i < n1; i++)
        arr_ls[i] = arr[ls + i];
    for (j = 0; j < n2; j++)
        arr_rs[j] = arr[mid + 1 + j];

    i = 0;
    j = 0;
    k = ls;
    while (i < n1 && j < n2) {
        if (arr_ls[i] <= arr_rs[j]) {
            arr[k] = arr_ls[i];
            i++;
        }
        else {
            arr[k] = arr_rs[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = arr_ls[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = arr_rs[j];
        j++;
        k++;
    }
}
