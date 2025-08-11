#include <stdio.h>

int main() {
    const float PI = 3.14;
    float radius, area;

    printf("enter radius: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    printf("area of circle = %.2f\n", area);

    return 0;
}
