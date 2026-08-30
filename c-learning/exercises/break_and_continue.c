#include <stdio.h>

int main() {

    for (int i = 1; i < 20; i++)
    {
        if ((i%13==0))
        {
            break;
        }else if (i%7==0)
        {
            continue;
        } else {
            printf("%d\n", i);
        }
    }
    
    return 0;
}