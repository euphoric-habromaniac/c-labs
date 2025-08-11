#include <stdio.h>

int main() {
    int num1, num2;

    printf("enter first integer: ");
    scanf("%d", &num1);
    printf("enter second integer: ");
    scanf("%d", &num2);

    printf("subtraction: %d\n", num1 - num2);
    printf("multiplication: %d\n", num1 * num2);

    if (num2 != 0) {
        printf("division: %d\n", num1 / num2);
        printf("modulo: %d\n", num1 % num2);
    } else {
        printf("division and modulo not possible (division by zero)\n");
    }

    return 0;
}
