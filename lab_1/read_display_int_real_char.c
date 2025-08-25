/* WAP in C to read and display an integer number, real number and character. */

#include <stdio.h>

int main()
{
    int i;
    float f;
    char c;
    
    scanf("%d %f %c", &i, &f, &c);
    printf("%d %.2f %c\n", i, f, c);
    
    return 0;
}
