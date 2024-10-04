#include<stdio.h>
int main()
{
char operator;
int a,b,result;

printf("What do you want to do(+,-,*,/):");
scanf("%c", &operator);

printf("Enter Numbers: ");
scanf("%d %d", &a, &b);

switch (operator) {

case'+':
    result= a+b;
    printf("%d + %d= %d\n",a,b,result);
    break;

case'-':
    result= a-b;
    printf("%d -%d= %d\n",a,b,result);
    break;

case'*':
    result= a*b;
    printf("%d*%d= %d\n",a,b,result);
    break;

case'/':
    result= a/b;
    printf("%d / %d= %d\n",a,b,result);
    break;

default:
    printf("Invalid Operator or Number.");

}
return 0;
}
