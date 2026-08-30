#include <stdio.h>
#include <stdbool.h>

int main() {

    bool is_student = true;
    int age = 23;

    /* Logical operations
    '>' = greater,
    '>=' = equal-greater,
    '==' = equal,
    '!=' = not equal,
    '<' = smaller,
    '<=' = equal-smaller
    */

    if (is_student)
    {
        printf("He is a student.\n");
    }else {
        printf("He is not a student.");
    }
    
    if (is_student && age >= 20)
    {
        printf("He is a student. He is over 20 years old.");
    }else if (is_student && age < 20)
    {
        printf("He is a student. But he is not over 20 years old.");
    } else if (!is_student && age > 20)
    {
        printf("He is not a student. But he is over 20 years old.");
    } else {

        printf("He is not a student. but also, he is not over 20 years old.");

    }
    
    if ((!is_student && age > 20) || (is_student && age > 20))
    {
        printf("\nWelcome to the club.");
    }else {
        printf("\nYou are not allowed to enter.");
    }
    
    
    

    return 0;
}