#include <stdio.h>

int main() {
    float num1, num2;

    printf("enter first number: ");
    scanf("%f", &num1);
    printf("enter second number: ");
    scanf("%f", &num2);

    printf("addition: %.2f\n", num1 + num2);
    printf("subtraction: %.2f\n", num1 - num2);
    printf("multiplication: %.2f\n", num1 * num2);

    if (num2 != 0)
        printf("division: %.2f\n", num1 / num2);
    else
        printf("division not possible (division by zero)\n");

    return 0;
}
