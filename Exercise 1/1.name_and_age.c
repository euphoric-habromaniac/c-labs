#include <stdio.h>

int main() {
    char name[50];
    int age;

    printf("enter your name: ");
    scanf("%49s", name);  // avoids overflow
    printf("enter your age: ");
    scanf("%d", &age);

    printf("name: %s\n", name);
    printf("age: %d\n", age);

    return 0;
}
