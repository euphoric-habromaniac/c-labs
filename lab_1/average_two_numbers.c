/* WAP in C to calculate the average of two numbers given by the user. */

#include <stdio.h>

int main()
{
    float a, b;
    scanf("%f %f", &a, &b);
    printf("Average = %.2f\n", (a + b) / 2);
    return 0;
}
