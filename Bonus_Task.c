#include <stdio.h>

int main()
{   int n,i,j,sum=0;
    printf("Enter n: \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Prefix array elements: \n");
    for(int k=0;k<n;k++){
        scanf("%d",&arr[k]);
    }
    printf("Enter i: \n");
    scanf("%d",&i);
    printf("Enter j: \n");
    scanf("%d",&j);
    if(i!=0){
    for(int l=i;l<=j;l++){
        sum=sum+(arr[l]-arr[l-1]);
    }
    printf("%d",sum);}
    else{sum=sum+arr[0];
        for(int l=i+1;l<=j;l++){
        sum=sum+(arr[l]-arr[l-1]);
    }
    }
    
}
