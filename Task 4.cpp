#include<stdio.h>
int main()
{
int  n;
scanf("%d", &n);

if (n<0){
printf("The number %d is negative\n",n);
}
else if (n>0){
printf("The number %d is positive\n",n);
}
else if (n==0){
printf("The number is zero\n",n);
}
else {
printf("Invalid Input");
}

return 0
}
