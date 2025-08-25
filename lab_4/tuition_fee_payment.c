/* Program to calculate tuition fee payment based on mode: 1=Cash (10% discount), 2=Two installments (5% interest), 3=Three installments (10% interest). */

#include <stdio.h>
int main(){int fee,mode; scanf("%d %d",&fee,&mode); if(mode==1) printf("%d\n",fee-fee*0.1); else if(mode==2) printf("Two installments of %.2f\n",fee*1.05/2); else if(mode==3) printf("Three installments of %.2f\n",fee*1.10/3); else printf("Invalid mode\n"); return 0;}