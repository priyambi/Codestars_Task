
#include <stdio.h>
#include<conio.h>

int main()
{   int n;
    int c=0;
    printf("Enter n: ");
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        int  num=i;
        for(int j=2;j<i;j++){
            if(i%j==0){
                c++;
                break;
            }}
            int rem=0,rev=0;
            
            if(c==0){
                while(num!=0){
                rem=num%10;    
                rev=rev*10+rem;    
                num=num/10;}
                if(rev==i){
                    printf("%d\n",i);
                }
                
            }
        
        c=0;
    }

    return 0;
}
