#include <stdio.h>
#include<conio.h>

int main(){
    int n;
    printf("Enter n : \n");
    scanf("%d",&n);
    int arr[n];
    int newarr[n];
    printf("Input the array elements : \n");
    for(int i = 0; i < n; i++)
    {
    scanf("%d",&arr[i]);
    
    }
    newarr[0] = arr[0];
 
    for (int i = 1; i < n; i++){
        newarr[i] = newarr[i - 1] + arr[i];}
    for(int i = 0; i < n; i++){
        printf("%d \t",newarr[i]);}}
