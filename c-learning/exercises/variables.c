#include <stdio.h>

int main(){

    
    int age = 25;
    float GPA = 4.13;
    double PI = 3.141592653669987;
    char grade = 'F';
    char name[] = "Jack";
    char full_name[] = "Jack Smith";

    printf("you are %d years old.\n", age);
    printf("your GPA is %.2f.\n", GPA);
    printf("The PI number is %lf.\n", PI);
    printf("The grade is %c of math course.\n", grade);
    printf("the name is %s\n", name);
    printf("the full name is %s.\n", full_name);

    return 0;
}