#include <stdio.h>

float celsius_to_fahrenheit(float celsius);

int main() {

    float celsius, fahrenheit;

    printf("***Celsius to Fahrenheit Converter ***\n");
    printf("Enter a temperature based on celsius: ");
    if (scanf("%f", &celsius) != 1)
    {
        printf("Error: Invalid Input\n");
        return 1;
    }

    printf("The %.2f Celsius is equal to %.2f Fahrenheit", celsius, celsius_to_fahrenheit(celsius));

    return 0;
}

float celsius_to_fahrenheit(float celsius) {
    float fahrenheit = celsius * 9/5 +32;
    return fahrenheit;
}
