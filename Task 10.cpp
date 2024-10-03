#include<stdio.h>
int main()
{
int n,sum=0;
printf("The size of array:");
scanf("%d", &n);

int arr[n];
for(int i=0; i<n; i++){
scanf("%d", &arr[i]);
}

for (int i =0; i<n; i++){

sum += arr[i];
}

printf("The sum of the array is:%d\n",sum);

return 0;

}
