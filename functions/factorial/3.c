#include <stdio.h>

int n;

int fact()
{
    int fact=1;
    
    printf("enter the number : ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
      fact=fact*i;
    }
    
    return fact; 
}

main()
{
    int result;
    result=fact();  
    printf("%d!=%d",n,result);   
}