#include <stdio.h>
#include <string.h>
int main()
{
  char a[100];
  char str[100];
  int length;
  int j=0;

  printf("Enter a string \n");
  scanf("%s",a);
  length = strlen(a);
  for(int i=length-1;i>=0;i--)
  {
    str[j]=a[i];  
    j++;
  }
  printf("%s",str);

 

  return 0;
}
