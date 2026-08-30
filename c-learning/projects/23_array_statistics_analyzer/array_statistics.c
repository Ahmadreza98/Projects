#include <stdio.h>

float maximum_array(int *array_value, int size);
float minimum_array(int *array_value, int size);
float average_array(int *array_value, int size);

int main() {
    
    printf("*** Array Statistics Analyzer ***\n");

    int inp, value;

    printf("How Many Want You Input Numbers: ");
    if (scanf("%d", &inp) != 1 || inp <= 0 || inp > 100)
    {
        printf("Error: Invalid Input\n");
        return 1;
    }
    
    int arr_numbers[inp+1];

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
    
    printf("The Maximum Number: %.2f\nThe Minimum Number: %.2f\nThe Average Number: %.2f", maximum_array(arr_numbers, inp), minimum_array(arr_numbers, inp), average_array(arr_numbers, inp));

    return 0;
}

float maximum_array(int *array_value, int size) {
    float maximum = *array_value;
    for (int i = 1; i < size; i++)
    {
        if (*(array_value+i) > maximum)
        {
            maximum = *(array_value+i);
        }
        
    }
    return maximum;
}

float minimum_array(int *array_value, int size) {
     float minimum = *array_value;
    for (int i = 1; i < size; i++)
    {
        if (*(array_value+i) < minimum)
        {
            minimum = *(array_value+i);
        }
        
    }
    return minimum;
}

float average_array(int *array_value, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *(array_value+i);
    }
    return (float)sum/size;
}
