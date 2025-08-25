/* Declare two variables x and y. Print x if <2000 or >3000, print y if between 100 and 500. */

#include <stdio.h>
int main(){int x,y; scanf("%d %d",&x,&y); if(x<2000||x>3000) printf("%d\n",x); if(y>100 && y<500) printf("%d\n",y); return 0;}