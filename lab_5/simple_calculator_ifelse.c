/* Write a C program that simulates a simple calculator using if-else. */

#include <stdio.h>
int main(){int a,b; char op; scanf("%d %d %c",&a,&b,&op); if(op=='+') printf("%d\n",a+b); else if(op=='-') printf("%d\n",a-b); else if(op=='*') printf("%d\n",a*b); else if(op=='/') printf("%d\n",a/b); else if(op=='%') printf("%d\n",a%b); else printf("Invalid\n"); return 0;}