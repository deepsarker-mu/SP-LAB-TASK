#include<stdio.h>
int main()
{
float l1,l2,l3;

printf("Three sides of a triangle:\n");
scanf("%f %f %f", &l1, &l2, &l3);

if((l1+l2>l3) && (l2+l3>l1) &&(l1+l3>l2)){
    printf("The triangle is valid.\n");
}
/*else if (l1+l3>l2){
    printf("The Triangle is valid.\n");
}
else if (l2+l3>l1){
    printf("The Triangle is valid.\n");
}
*/
else {
    printf("The triangle is not valid.\n");
    }


return 0;
}
