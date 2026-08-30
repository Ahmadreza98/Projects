#include <stdio.h>

int main() {

    // Arithmetic Operation: + - / * % ++ --

    int x = 10;
    int y = 22;
    float z = 32;

    // Augmented assignment operators
    // x+=3; => 13
    // x-=3; => 7
    // x/=3; => 3.33333 if the type of x is float
    // x*=3; => 30

    printf("sum is: %d\n", x+y);
    printf("minus is: %d\n", x-y);
    printf("div is: %f\n", x/z);
    printf("mul is: %d\n", x*y);
    printf("mod is: %d\n", x%y);
    printf("pp is: %d\n", ++x);
    printf("mm is: %d\n", --x);

    return 0;
}