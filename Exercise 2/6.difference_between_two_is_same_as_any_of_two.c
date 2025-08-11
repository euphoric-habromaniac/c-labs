#include <stdio.h>

int main() {
    int num1, num2, diff;
    printf("enter first number: ");
    scanf("%d", &num1);
    printf("enter second number: ");
    scanf("%d", &num2);

    diff = num1 - num2;
    if (diff < 0) diff = -diff; // absolute value

    if (diff == num1 || diff == num2) {
        printf("difference is equal to value\n");
    } else {
        printf("difference is not equal to any of the values entered\n");
    }
    return 0;
}
