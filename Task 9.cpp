#include<stdio.h>
int main()
{
int n,max;
printf("The size of array:");
scanf("%d", &n);

int arr[n];
for(int i=0; i<n; i++){
scanf("%d", &arr[i]);
}
max = arr[0];
for (int i =1; i<n; i++){

if (arr[i]>max){
    max = arr[i];
  }
}

printf("The maximum element in the array is:%d\n", max);

return 0;

}
