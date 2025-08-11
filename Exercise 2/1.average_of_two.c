#include <stdio.h>

int main() {
    float num1, num2, avg;
    printf("enter first number: ");
    scanf("%f", &num1);
    printf("enter second number: ");
    scanf("%f", &num2);

    avg = (num1 + num2) / 2;
    printf("average = %.2f\n", avg);

    return 0;
}
