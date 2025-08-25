/* Write a C program that takes temperature in Celsius and prints description (Freezing, Cold, Cool, Warm, Hot). */

#include <stdio.h>
int main(){int t; scanf("%d",&t); if(t<0) printf("Freezing\n"); else if(t<=10) printf("Cold\n"); else if(t<=20) printf("Cool\n"); else if(t<=30) printf("Warm\n"); else printf("Hot\n"); return 0;}