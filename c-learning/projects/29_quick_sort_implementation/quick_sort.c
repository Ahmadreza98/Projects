/*

    Project 29: Quick Sort Implementation

*/

#include <stdio.h>

void quickSort(int *arr, int low, int high);
int partition(int *arr, int low, int high);
void swap(int* a, int* b);

int main() {

    int inp;

    printf("*** Quick Sort Implementation ***\n");
    printf("How Many Want to Enter of Value (1-100): ");
    if (scanf("%d", &inp) != 1 || inp < 1 || inp > 100)
    {
        printf("Invalid Input\n");
        return 1;
    }

    int arr[inp];

    for (int i = 0; i < inp; i++)
    {
        printf("Index(%d): ",i);
        if (scanf("%d", &arr[i]) != 1)
        {
            printf("Invalid Input\n");
            return 1;
        }
        
    }

    printf("Before Quick Sort: [");
    for (int i = 0; i < inp; i++)
    {
        if (i == inp - 1) printf("%d]", arr[i]);
        else printf("%d, ", arr[i]);
    }
    
    quickSort(arr, 0, inp - 1);

    printf("\nAfter Quick Sort: [");
    for (int i = 0; i < inp; i++)
    {
        if (i == inp - 1) printf("%d]", arr[i]);
        else printf("%d, ", arr[i]);
    }

    return 0;
}

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void quickSort(int *arr, int low, int high) {
    if (low < high) {
        
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int partition(int *arr, int low, int high) {
    
    int pivot = arr[high];
    
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    
    swap(&arr[i + 1], &arr[high]);  
    return i + 1;
}
