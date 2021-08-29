#include <stdio.h>
#include<conio.h>
int main()
{
int n,num;
int sumf=0;
printf("Enter n : \n");
scanf("%d",&n);
int arr[n];
printf("Input the array elements : \n");
for(int i = 0; i < n-1; i++)
{
scanf("%d",&arr[i]);
sumf=sumf+arr[i];
}
int sum=((n+1)*(n))/2;
num=sum-sumf;
printf("%d",num);
}
