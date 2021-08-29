#include <stdio.h>
#include<conio.h>
int main()
{
int n;
printf("Enter the number of elements : \n");
scanf("%d",&n);
int arr[n];
printf("Input the array elements : \n");
for(int i = 0; i < n; i++)
{
scanf("%d",&arr[i]);
}
int min =arr[0];
int min2 =arr[0] ;
for(int i = 1; i < n; i++)
{
if(arr[i] < min)
{
min2 = min;
min = arr[i];
}
}
printf("The second smallest element is %d \n",min2);
return 0;
}
