#include <stdio.h>

int main() {

    int num_array[] = {0,1,2,3,4};
    char ch_array[] = {'A','B','C','D','E'};

    for (int i = 0; i < 5; i++)
    {
        printf("index-%d: %c\n",num_array[i],ch_array[i]);
    }
    
    num_array[1] = 100;

    return 0;
}