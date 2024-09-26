#include<stdio.h>
int main(){
int a,b,c,maximum;
scanf("%d %d %d", &a,&b,&c);

if(a>b && a>c){
    printf("maximum=%d\n",a);
}
else if (b>a && b>c){
    printf("maximum=%d\n",b);
}

else if (c>a && c>b) {
    printf("maximum=%d\n",c);
}
else{
    printf("Numbers are equal\n");
}
return 0;
}
