#include <stdio.h>

int main() {
    float length, breadth, area;
    printf("enter length: ");
    scanf("%f", &length);
    printf("enter breadth: ");
    scanf("%f", &breadth);

    area = length * breadth;
    printf("area of rectangle = %.2f\n", area);

    return 0;
}
