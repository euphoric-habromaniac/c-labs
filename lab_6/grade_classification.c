/* Write a C program that prints grade (A-F) based on input marks. */

#include <stdio.h>
int main(){int s; scanf("%d",&s); if(s>=90&&s<=100) printf("A\n"); else if(s>=80) printf("B\n"); else if(s>=70) printf("C\n"); else if(s>=60) printf("D\n"); else printf("F\n"); return 0;}