#include <stdio.h>

int main() {
    int num;

    printf("enter a number: ");
    scanf("%d", &num);

    printf("square: %d\n", num * num);
    printf("cube: %d\n", num * num * num);

    return 0;
}
