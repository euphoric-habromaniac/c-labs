/* A store gives discounts: Members spending >100 get 10%, Non-members spending >150 get 5%, otherwise no discount. */

#include <stdio.h>
int main(){int amt,member; scanf("%d %d",&amt,&member); if(member==1 && amt>100) printf("%.2f\n",amt*0.9); else if(member==0 && amt>150) printf("%.2f\n",amt*0.95); else printf("%d\n",amt); return 0;}