/* Write a program in C to find whether a given year is a leap year or not. */

#include <stdio.h>
int main(){int y; scanf("%d",&y); if((y%4==0 && y%100!=0)|| y%400==0) printf("Leap Year\n"); else printf("Not Leap Year\n"); return 0;}