/* Write a C program that takes 3 sides of a triangle and determines if it is Equilateral, Isosceles, Scalene, or Not a triangle. */

#include <stdio.h>
int main(){int a,b,c; scanf("%d %d %d",&a,&b,&c); if(a+b<=c||a+c<=b||b+c<=a) printf("Not a triangle\n"); else if(a==b && b==c) printf("Equilateral\n"); else if(a==b||b==c||a==c) printf("Isosceles\n"); else printf("Scalene\n"); return 0;}