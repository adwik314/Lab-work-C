#include <stdio.h>

int main() {
    char name;
    int age;

    printf("Enter the first letter of your name: ");
    scanf(" %c", &name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Hello, %c. You are %d years old.\n", name, age);

    return 0;
}
