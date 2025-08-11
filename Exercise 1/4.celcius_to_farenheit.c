#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("enter temperature in celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("fahrenheit: %.2f\n", fahrenheit);

    printf("enter temperature in fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("celsius: %.2f\n", celsius);

    return 0;
}
