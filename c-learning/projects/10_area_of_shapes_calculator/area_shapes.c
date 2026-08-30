#include <stdio.h>

int main() {

    int choose = 0;
    float radial = 0.0, area = 0.0, length = 0.0, width = 0.0;
    float const PI = 3.14;

    printf("*** Area of Shapes Calculator ***\n");
    printf("1.Circle\n2.Square\nEnter a Choose (1 or 2): ");
    if (scanf("%d", &choose) != 1)
    {
        printf("Error: Invalid Input\n");
        return 1;
    }
    
    switch (choose)
    {
    case 1:
        printf("Enter radial of circle: ");
        if (scanf("%f", &radial) != 1 || radial < 0)
        {
            printf("Error: Invalid Input\n");
            return 1;
        }
        printf("The Area of Circle is: %.2f", PI*radial*radial);
        break;
    case 2:
        printf("Enter length of square: ");
        if (scanf("%f", &length) != 1 || length < 0)
        {
            printf("Error: Invalid Input\n");
            return 1;
        }
        printf("Enter width of square: ");
        if (scanf("%f", &width) != 1 || width < 0)
        {
            printf("Error: Invalid Input\n");
            return 1;
        }
        printf("The Area of Square is: %.2f", length*width);
        break;
    
    default:
        printf("Error: Invalid choice\n");
        break;
    }

    return 0;
}
