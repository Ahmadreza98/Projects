#include <stdio.h>
#include <string.h>

int main() {

    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[30] = "";
    char fname[30] = "";

    // input section

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your gpa: ");
    scanf("%f", &gpa);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    // printf("Enter your name: ");
    // scanf("%s", &name);
    
    getchar();

    printf("Enter your full name: ");
    fgets(fname, sizeof(fname), stdin);

    fname[strcspn(fname, "\n")] = '\0';

    // output section

    printf("your age is: %d.\n", age);
    printf("your gpa is: %.2f.\n", gpa);
    printf("your grade is: %c.\n", grade);
    // printf("your name is: %s.\n", name);
    printf("your full name is: %s.\n", fname);


    return 0;
}