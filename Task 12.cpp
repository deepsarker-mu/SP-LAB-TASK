#include<stdio.h>
int main ()
{
 int n,i,sum = 0;
 scanf("%d", &n);
 for(i=1 ; i<=n ;i++){
 sum += i;
 }
 printf("Sum of %d numbers=%d\n",n, sum);
 return 0;
}
