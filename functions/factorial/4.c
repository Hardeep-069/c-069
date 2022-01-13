#include <stdio.h>

int n;

int fact(int x)
{
    int fact=1;
    for(int i=1;i<=x;i++)
    {
      fact=fact*i;
    }
   
   return fact;    
}

main()
{
    int result;
    
    printf("enter the number : ");
    scanf("%d",&n);
    
    result=fact(n); 
    printf("%d!=%d",n,result);  
}