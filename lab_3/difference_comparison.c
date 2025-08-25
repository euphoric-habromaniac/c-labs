/* Accept 2 numbers. Calculate the difference. If it equals any input value, print 'Difference is equal to value', else 'Difference is not equal'. */

#include <stdio.h>
int main(){int a,b,d; scanf("%d %d",&a,&b); d=a-b; if(d==a||d==b) printf("Difference is equal to value\n"); else printf("Difference is not equal\n"); return 0;}