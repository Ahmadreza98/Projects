#include <stdio.h>

void HappyBirthDay(char name[30], int age) {
    printf("Happy Birth Day!\n");
    printf("Happy Birth Day!\n");
    printf("Happy Birth Day, %s!\n", name);
    printf("Your age is %d years old.\n", age);
}

int main() {

    char name[30] = "Jack Smith";
    int age = 28;

    HappyBirthDay(name, age);

    return 0;
}