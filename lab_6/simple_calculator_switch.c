/* Write a C program that simulates a simple calculator using switch. */

#include <stdio.h>
int main(){int a,b; char op; scanf("%d %d %c",&a,&b,&op); switch(op){case '+': printf("%d\n",a+b); break; case '-': printf("%d\n",a-b); break; case '*': printf("%d\n",a*b); break; case '/': printf("%d\n",a/b); break; case '%': printf("%d\n",a%b); break; default: printf("Invalid\n");} return 0;}